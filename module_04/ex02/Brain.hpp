/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 13:32:29 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 13:47:55 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	protected:
	std::string	_ideas[100];
	
	public:
		Brain();
		Brain(const Brain &other_object);
		Brain &operator=(const Brain &other_object);
		~Brain();
};

#endif
