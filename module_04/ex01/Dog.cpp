/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:11 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 16:20:35 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _type("Dog") {
	std::cout << "Default constructor Dog is called" << std::endl;
}

Dog::Dog(const std::string name) : _type(name) {
	std::cout << "Constructor Dog is called for " << name << std::endl;
}

Dog::Dog(const Dog &other_class){
	std::cout << "Copy constructor Dog is called" << std::endl;
	this->_type = other_class._type;
}

Dog &Dog::operator=(const Dog& other_class){
	if (this != &other_class)
		this->_type = other_class._type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Deconstructor Dog is called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << this->_type << " WOEF" << std::endl;
}
