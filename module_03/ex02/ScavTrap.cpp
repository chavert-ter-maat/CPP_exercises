/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:08 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/20 16:12:09 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->_name = "Default";
	this->_hitPoints = ST_HEALTH;
	this->_energyPoints = ST_ENERGY;
	this->_attackDamage = ST_DAMAGE;
	this->_guardgate = false;
	std::cout << "ScavTrap default constructor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->_name = name;
	this->_hitPoints = ST_HEALTH;
	this->_energyPoints = ST_ENERGY;
	this->_attackDamage = ST_DAMAGE;
	this->_guardgate = false;
	std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other_obj){
	this->_name = other_obj._name;
	this->_hitPoints =  other_obj._hitPoints;
	this->_energyPoints =  other_obj._energyPoints;
	this->_attackDamage =  other_obj._attackDamage;
	this->_guardgate = other_obj._guardgate;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap deconstructor is called for " << this->_name << std::endl;
}

void	ScavTrap::guardgate(){
	if (this->_guardgate == false)
	{
		this->_guardgate = true;
		std::cout << this->_name <<"'s guardgate is on" << std::endl;
	}
	else
	{
		this->_guardgate = false;
		std::cout << this->_name <<"'s guardgate is off" << std::endl;
	}
}
