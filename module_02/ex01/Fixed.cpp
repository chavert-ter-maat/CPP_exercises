/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:53:13 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/14 16:42:45 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
}

Fixed::Fixed(const int integer){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = integer << this->_fractional_bit; // needs fix
}

Fixed::Fixed(const float float_integer){
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = static_cast<int>(float_integer * (1 << this->_fractional_bit));
}

Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point = other.getRawBits();
} 

Fixed Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment overload called" << std::endl;
	this->_fixed_point = other._fixed_point;
	return (*this);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" <<std::endl;
	return (this->_fixed_point >> this->_fractional_bit);
}

void	Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called" <<std::endl;
	this->_fixed_point = raw << this->_fractional_bit;
}

float	Fixed::toFloat(void) const {
    return static_cast<float>(this->_fixed_point) / (1 << this->_fractional_bit);
}

int		Fixed::toInt(void) const{
	return (this->_fixed_point >> this->_fractional_bit);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &other){
	os << other.toFloat();
	return os;
}