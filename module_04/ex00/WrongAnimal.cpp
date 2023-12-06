/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 13:01:27 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 10:56:46 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {
	std::cout << "Default constructor WrongAnimal is called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &other_class){
	std::cout << "Copy constructor WrongAnimal is called" << std::endl;
	this->_type = other_class._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal& other_class){
	if (this != &other_class)
		this->_type = other_class._type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Deconstructor WrongAnimal is called" << std::endl;
}

const std::string &WrongAnimal::getType() const{
	return this->_type;
}

void WrongAnimal::makeSound() const{
	std::cout << this->_type << " *Piew Piew*" << std::endl;
}
