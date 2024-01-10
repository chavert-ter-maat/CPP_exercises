/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 13:32:31 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 16:49:09 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default constructor Brain is called" << std::endl;
}

Brain::Brain(const Brain &obj){
	std::cout << "Copy constructor Brain is called" << std::endl;
		*this = obj;
}

Brain &Brain::operator=(const Brain& obj){
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return *this;
}

Brain::~Brain(){
	std::cout << "Deconstructor Brain is called" << std::endl;
}