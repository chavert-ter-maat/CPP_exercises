/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 13:32:31 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 13:54:16 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default constructor Brain is called" << std::endl;
}

Brain::Brain(const Brain &other_class){
	std::cout << "Copy constructor Brain is called" << std::endl;
		*this = other_class;
}

Brain &Brain::operator=(const Brain& other_class){
	if (this != &other_class)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other_class._ideas[i];
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Deconstructor Brain is called" << std::endl;
}