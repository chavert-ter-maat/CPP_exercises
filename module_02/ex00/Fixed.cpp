/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:53:13 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/13 16:55:23 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

include "Fixed.hpp"

Fixed::Fixed(void){
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point = 0;
}

Fixed::~Fixed(void){
	std::cout << "Default constructor called" << std::endl;
}