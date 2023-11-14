/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:33:05 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/14 16:30:45 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
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

		Fixed operator=(const Fixed &other); //operatore overload
		
	private:
		int 				_fixed_point;
		static const int	_fractional_bit = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &other);