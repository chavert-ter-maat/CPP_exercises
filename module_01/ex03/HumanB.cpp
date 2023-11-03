/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 11:05:01 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/03 15:46:17 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}
	
void	HumanB::attack(void){
	
	if (this->_weapon == NULL)
		std::cout << this->_name << " doesn't have a weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}