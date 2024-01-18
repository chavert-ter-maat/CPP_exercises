/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:26:16 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/18 18:58:56 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

class NotFoundException : public std::exception{
	virtual const char *what() const throw();
};

template <typename T> 
typename T::iterator easyfind(T &obj, int nb)
{
	typename T::iterator it = std::find(obj.begin(), obj.end(), nb);
	if (it == obj.end())
		throw NotFoundException();
	return (it);
}
#endif
