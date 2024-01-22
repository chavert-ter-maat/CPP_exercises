/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:26:16 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/22 15:23:01 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack();
	MutantStack(const MutantStack& obj);
	MutantStack& operator=(const MutantStack& obj);
	~MutantStack();
	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"

#endif
