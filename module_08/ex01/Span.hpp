/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:26:16 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/19 14:38:35 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class Span{
	private:
		uint				_maxStored;
		std::vector<int>	_vec;
		
	public:
		Span();
		Span(unsigned int);
		Span(const Span &obj);
		Span &operator=(const Span &obj);
		~Span();

		void	addNumber(int nb);
		void	print();
		uint	shortestSpan();
		uint	longestSpan();
		void	addRange();
};
#endif
