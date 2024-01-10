/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Claptrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:53:06 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/04 16:13:47 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"){
	std::cout << "ClapTrap default constructor is called" << std::endl;
	this->_hitPoints = CLAP_HEALTH;
	this->_energyPoints = CLAP_ENERGY;
	this->_attackDamage = CLAP_ATTACK;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name)
{
    std::cout << "ClapTrap constructor is called with the name: " << name << std::endl;
	this->_hitPoints = CLAP_HEALTH;
	this->_energyPoints = CLAP_ENERGY;
	this->_attackDamage = CLAP_ATTACK;
}

ClapTrap::ClapTrap(ClapTrap &other_obj){
	if (this != &other_obj)
		*this = other_obj;
	std::cout << "ClapTrap copy constructor called from " << other_obj._name<< std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other_obj)
{
	std::cout << "ClapTrap assignment overload copied from " << other_obj._name << std::endl;
	if (this != &other_obj)
	{
		this->_name = other_obj._name;
		this->_hitPoints = other_obj._hitPoints;
		this->_energyPoints = other_obj._energyPoints;
		this->_attackDamage = other_obj._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor is called for " << this->_name << std::endl;
}

bool	ClapTrap::CanDoAction(){
	if (this->_hitPoints <= 0)
	{
		std::cout << "Cant do action when death" << std::endl;
		return false;
	}
	if (this->_energyPoints <= 0)
	{
			std::cout << "Cant do action without energy" << std::endl;
			return false;
	}
	this->_energyPoints--;
	return true;
}

void	ClapTrap::showInformation(){
	std::cout << std::endl << "Info" << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Hit points: " << this->_hitPoints << std::endl;
	std::cout << "Energy points " << this->_energyPoints << std::endl;
	std::cout << "Attack damage " << this->_attackDamage << std::endl << std::endl;
}

void	ClapTrap::attack(const std::string& target){
	if (this->CanDoAction() == false)
		return ;
	std::cout << "ClapTrap " << this->_name << " attacks, causing " 
		<< this->_attackDamage << " points of damage to " << target << std::endl;
}
	
void	ClapTrap::takeDamage(unsigned int amount){
	std::cout << this->_name << " took " << amount << " damage" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " has died" << std::endl;
		this->_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->CanDoAction() == false)
		return ;
	else
		this->_hitPoints += amount;
	std::cout << this->_name << " healed itself, and has a total of: " << this->_hitPoints << " hitpoints" << std::endl;
}