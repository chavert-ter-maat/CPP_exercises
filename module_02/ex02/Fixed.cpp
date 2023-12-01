/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:53:13 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/29 16:07:24 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// constructor
Fixed::Fixed(void){
	this->_fixed_point = 0;
}

// int constructor
Fixed::Fixed(const int integer){
	this->_fixed_point = integer << this->_fractional_bit; // needs fix
}

// float constructor
Fixed::Fixed(const float float_integer){
	this->_fixed_point = roundf(float_integer * (1 << this->_fractional_bit));
}

// copy constructor
Fixed::Fixed(const Fixed &other){
	this->_fixed_point = other._fixed_point;
} 

// overload constructor
Fixed &Fixed::operator=(const Fixed &other){
	if (this != &other)
		this->_fixed_point = other._fixed_point;
	return *this;
}

// destructor
Fixed::~Fixed(void){
}

int	Fixed::getRawBits() const {
	return (this->_fixed_point);
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


// Arithmetic operators
Fixed	Fixed::operator+(const Fixed &other){
	Fixed temp(this->toFloat() + other.toFloat());
	return temp;
}

Fixed Fixed::operator-(const Fixed& other){
	Fixed temp(this->toFloat() - other.toFloat());
	return temp;
}

Fixed Fixed::operator*(const Fixed& other){
	Fixed temp(this->toFloat() * other.toFloat());
	return temp;
}

Fixed Fixed::operator/(const Fixed& other){
	Fixed temp(this->toFloat() / other.toFloat());
	return temp;
}


// Increment/Decrement operators
Fixed Fixed::operator--(int){
	Fixed temp = *this;
	this->_fixed_point--;
	return temp;
}

Fixed Fixed::operator++(int){
	Fixed temp = *this;
	this->_fixed_point++;
	return temp;
}
	
Fixed &Fixed::operator++(){
	this->_fixed_point++;
	return *this;
}

Fixed &Fixed::operator--(){
	this->_fixed_point--;
	return *this;
}


// Comparison operators
bool Fixed::operator>(const Fixed& other){
	if (this->getRawBits() > other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<(const Fixed& other){
	if (this->getRawBits() < other.getRawBits())
		return true;
	return false;
}
bool Fixed::operator>=(const Fixed& other){
	if (this->getRawBits() >= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed& other){
	if (this->getRawBits() <= other.getRawBits())
		return true;
	return false;
}

bool Fixed::operator==(const Fixed& other){
	if (this->getRawBits() == other.getRawBits())
		return true;
	return false;	
}

bool Fixed::operator!=(const Fixed& other){
	if (this->getRawBits() != other.getRawBits())
		return true;
	return false;	
}


Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a < b)
		return (b);
	else
		return (a);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
	if (a.getRawBits() < b.getRawBits())
		return b;
	return a;
}