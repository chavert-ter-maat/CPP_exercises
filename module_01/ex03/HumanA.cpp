/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 10:51:27 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/03 14:41:36 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
:_weapon(weapon){
	this->_name = name;
}

HumanA::~HumanA(void){
}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}

