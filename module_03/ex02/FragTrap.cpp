/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:08 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/04 16:28:50 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->_name = "Default";
	this->_hitPoints = FRAG_HEALTH;
	this->_energyPoints = FRAG_ENERGY;
	this->_attackDamage = FRAG_ATTACK;
	std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name){
	this->_name = name;
	this->_hitPoints = FRAG_HEALTH;
	this->_energyPoints = FRAG_ENERGY;
	this->_attackDamage = FRAG_ATTACK;
	std::cout << "FragTrap constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other_obj){
	this->_name = other_obj._name;
	this->_hitPoints =  other_obj._hitPoints;
	this->_energyPoints =  other_obj._energyPoints;
	this->_attackDamage =  other_obj._attackDamage;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap deconstructor is called for " << this->_name << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (this->CanDoAction() == false)
		return ;
	std::cout << "FragTrap with the name: " << this->_name << " wants to high five a bro" << std::endl;
}

void	FragTrap::attack(const std::string& target){
	if (this->CanDoAction() == false)
		return ;
	std::cout << "FragTrap" << this->_name << " attacks, causing " 
		<< this->_attackDamage << " points of damage to " << target << std::endl;
}
