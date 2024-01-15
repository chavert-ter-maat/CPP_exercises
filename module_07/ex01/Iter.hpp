/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:26:16 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/15 15:49:30 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	print(T obj, int len)
{
	for (int i = 0; i < len; i++)
		std::cout << obj[i] << std::endl;
}

template <typename T, typename F>
void	Iter(T *array, int len, F func){
	for (int i = 0; i < len; i++)
		func(array[i]);
}
#endif
