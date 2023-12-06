/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongWrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 13:02:04 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 13:03:08 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->_type = "WrongCat";
	std::cout << "Default constructor WrongCat is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other_class){
	std::cout << "Copy constructor WrongCat is called" << std::endl;
	this->_type = other_class._type;
}

WrongCat &WrongCat::operator=(const WrongCat& other_class){
	if (this != &other_class)
		this->_type = other_class._type;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "Deconstructor WrongCat is called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << this->_type << " miauuwww" << std::endl;
}
