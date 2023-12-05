/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:05 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 16:18:17 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _type("Cat") {
	std::cout << "Default constructor Cat is called" << std::endl;
}

Cat::Cat(const std::string name) : _type(name) {
	std::cout << "Constructor Cat is called for " << name << std::endl;
}

Cat::Cat(const Cat &other_class){
	std::cout << "Copy constructor Cat is called" << std::endl;
	this->_type = other_class._type;
}

Cat &Cat::operator=(const Cat& other_class){
	if (this != &other_class)
		this->_type = other_class._type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Deconstructor Cat is called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << this->_type << " miauuwww" << std::endl;
}
