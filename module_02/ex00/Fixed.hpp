/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:33:05 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/13 16:52:20 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
	Fixed(); //default constructor
	Fixed(const Fixed &other); //copy constructor
	Fixed &operator=(const Fixed &other); //operatore overload
	~Fixed(); //destructor

	int	getRawBits() const;
	void setRawBits(int const raw);

	private:
		int 				_fixed_point;
		static const int	_fractional_bit = 8;
};