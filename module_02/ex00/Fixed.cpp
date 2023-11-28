/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:53:13 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/28 11:16:31 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point = other.getRawBits();
} 

Fixed Fixed::operator=(const Fixed &other){
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->_fixed_point = other._fixed_point;
	}
	return (*this);
} 

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" <<std::endl;
	return (this->_fixed_point);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" <<std::endl;
	this->_fixed_point = raw << this->_fractional_bit;
}