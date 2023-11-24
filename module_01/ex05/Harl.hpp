/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 15:25:44 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/24 14:03:14 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <cstdlib>

class Harl
{
	private:
		void debug();
 		void info();
		void warning();
 		void error();

	public:
		void complain(std::string level);
};

typedef void (Harl::*t_func)(void);

#endif