/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:53:13 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/15 16:15:32 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor
Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
}

// int constructor
Fixed::Fixed(const int integer){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point = integer << this->_fractional_bit; // needs fix
}

// float constructor
Fixed::Fixed(const float float_integer){
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point = roundf(float_integer * (1 << this->_fractional_bit));
}

// copy constructor
Fixed::Fixed(const Fixed &other){
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point = other._fixed_point;
} 

// overload constructor
Fixed Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment overload called" << std::endl;
	this->_fixed_point = other._fixed_point;
	return (*this);
}

// destructor
Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}


int	Fixed::getRawBits() const {
	return (this->_fixed_point >> this->_fractional_bit);
}

void	Fixed::setRawBits(int const raw){
	this->_fixed_point = raw << this->_fractional_bit;
}

float	Fixed::toFloat(void) const {
    return roundf(this->_fixed_point) / (1 << this->_fractional_bit);
}

int		Fixed::toInt(void) const{
	return (this->_fixed_point >> this->_fractional_bit);
}

std::ostream	&operator<<(std::ostream &os, const Fixed &other){
	os << other.toFloat();
	return os;
}

// Increment/Decrement operators
Fixed Fixed::operator--(int){
	Fixed temp = *this;
	this->_fixed_point--;
	return (temp);
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	this->_fixed_point++;
	return (temp);
}
	
Fixed &Fixed::operator++(){
	this->_fixed_point++;
	return (*this);
}

Fixed &Fixed::operator--(){
	this->_fixed_point--;
	return (*this);
}
