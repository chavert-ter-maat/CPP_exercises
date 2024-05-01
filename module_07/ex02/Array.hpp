/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:26:16 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/18 14:40:51 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <algorithm>

template <typename T> 
class Array{
	private:
		T*	_ptr;
		int	_size;
	
	public:
		Array();
		Array(size_t n);
		Array(const Array &obj);
		Array(T arr[]);
		Array &operator=(const Array &obj);
		T &operator[](int index);
		~Array();
		
		void			print_array();
		int	size();

		class IndexException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

#include "Array.tpp"

#endif
