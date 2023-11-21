/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:35 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 11:13:12 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("Default AAnimal") {
	std::cout << "Default constructor AAnimal is called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other_class){
	std::cout << "Copy constructor AAnimal is called" << std::endl;
	this->_type = other_class._type;
}

AAnimal &AAnimal::operator=(const AAnimal& other_class){
	if (this != &other_class)
		this->_type = other_class._type;
	return *this;
}

AAnimal::~AAnimal(){
	std::cout << "Deconstructor AAnimal is called" << std::endl;
}

const std::string &AAnimal::getType() const{
	return this->_type;
}

void AAnimal::makeSound() const{
	std::cout << this->_type << " .........." << std::endl;
}
