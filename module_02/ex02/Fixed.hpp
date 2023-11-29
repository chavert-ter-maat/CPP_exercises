/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:33:05 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/29 12:50:38 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int 				_fixed_point;
		static const int	_fractional_bit = 8;
		
	public:
		Fixed(); //default constructor
		Fixed(const Fixed &other); //copy constructor
		Fixed(const int integer); //constructor takes int
		Fixed(const float floating_point); //constructor takes float nb
		
		~Fixed(); //destructor
		
		int		getRawBits() const;
		void 	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;

		Fixed& operator=(const Fixed &other); //operatore overload
		
		// Comparison operators
		bool operator>(const Fixed& other);
		bool operator<(const Fixed& other);
		bool operator>=(const Fixed& other);
		bool operator<=(const Fixed& other);
		bool operator==(const Fixed& other);
		bool operator!=(const Fixed& other);
	
		// // Arithmetic operators
		Fixed operator+(const Fixed& other);
		Fixed operator-(const Fixed& other);
		Fixed operator*(const Fixed& other);
		Fixed operator/(const Fixed& other);
	
		// Increment/Decrement operators
		Fixed& operator++();     // Pre-increment
		Fixed& operator--();     // Pre-decrement
		Fixed operator++(int);   // Post-increment
		Fixed operator--(int);   // Post-decrement

		static Fixed	&max( Fixed &a, Fixed &b);
		static Fixed	&min( Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &other);