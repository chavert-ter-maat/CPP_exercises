/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Claptrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:53:06 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/20 16:10:39 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(){
	std::cout << "ClapTrap default constructor is called" << std::endl;
	this->_name = "Default";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 3;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name)
{
    std::cout << "ClapTrap constructor is called with the name: " << name << std::endl;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 3;
}

ClapTrap::ClapTrap(ClapTrap &other_obj){
	if (this != &other_obj)
	{
		this->_name = other_obj._name;
		this->_hitPoints = other_obj._hitPoints;
		this->_energyPoints = other_obj._energyPoints;
		this->_attackDamage = other_obj._attackDamage;
	}
	std::cout << "ClapTrap copy constructor called from " << other_obj._name<< std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap deconstructor is called for " << this->_name << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &other_obj)
{
	std::cout << "ClapTrap copy constructor called, copied from " << other_obj._name << std::endl;
	if (this != &other_obj)
	{
		this->_name = other_obj._name;
		this->_hitPoints = other_obj._hitPoints;
		this->_energyPoints = other_obj._energyPoints;
		this->_attackDamage = other_obj._attackDamage;
	}
	return *this;
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