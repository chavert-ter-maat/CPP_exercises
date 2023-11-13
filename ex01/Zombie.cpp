/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 11:39:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/02 11:15:12 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	std::cout << "Zombie is created and his name is " << _name << std::endl;
}

Zombie::Zombie(void){
	std::cout << "Created Zombie" << std::endl;
}

Zombie::~Zombie(void){
	std::cout << this->_name  << ": destroyed" << std::endl;
}

void	Zombie::announce(void){
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
