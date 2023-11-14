/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:33:05 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/14 13:14:38 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
	Fixed(); //default constructor
	Fixed(const Fixed &other); //copy constructor
	void operator=(const Fixed &other); //operatore overload
	
	Fixed(const int integer); //constructor takes int
	Fixed(const float floating_point); //constructor takes float nb
	
	~Fixed(); //destructor

	int		getRawBits() const;
	void 	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	private:
		int 				_fixed_point;
		static const int	_fractional_bit = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &other);