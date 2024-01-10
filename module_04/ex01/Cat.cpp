/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:05 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 16:54:46 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(){
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default constructor Cat is called" << std::endl;
}

Cat::Cat(const std::string name){
	this->_type = name;
	this->_brain = new Brain();
	std::cout << "Constructor Cat is called for " << name << std::endl;
}

Cat::Cat(const Cat &obj){
	std::cout << "Copy constructor Cat is called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat& obj){
	if (this != &obj){
		this->_type = obj._type;
		delete this->_brain;
		this->_brain = new Brain(*(obj._brain));
	}
	return *this;
}

Cat::~Cat(){
	std::cout << "Deconstructor Cat is called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const{
	std::cout << this->_type << " miauuwww" << std::endl;
}
