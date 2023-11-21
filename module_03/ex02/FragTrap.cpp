/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:08 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 08:32:32 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->_name = "Default";
	this->_hitPoints = FT_HEALTH;
	this->_energyPoints = FT_ENERGY;
	this->_attackDamage = FT_DAMAGE;
	std::cout << "FragTrap default constructor is called" << std::endl;
}

FragTrap::FragTrap(std::string name){
	this->_name = name;
	this->_hitPoints = FT_HEALTH;
	this->_energyPoints = FT_ENERGY;
	this->_attackDamage = FT_DAMAGE;
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

	std::cout << "FragTrap with the name: " << this->_name << " wants to high five a bro" << std::endl;
}

