/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 15:33:11 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/12 16:54:30 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base{
	public:
	virtual ~Base();

	static Base* generate(void);
	static void	identify(Base* p);
	static void	identify(Base& p);
};
#endif