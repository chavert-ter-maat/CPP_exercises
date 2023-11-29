/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:33:05 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/29 11:59:48 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
	Fixed(); //default constructor
	Fixed(const Fixed &other); //copy constructor
	Fixed& operator=(const Fixed &other); //operatore overload
	~Fixed(); //destructor

	int		getRawBits() const;
	void 	setRawBits(int const raw);

	private:
		int 				_fixed_point;
		static const int	_fractional_bit = 8;
};