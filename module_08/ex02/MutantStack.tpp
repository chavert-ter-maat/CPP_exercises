/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/22 13:21:28 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// Canocical Orthodox
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>(){
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &obj){
	this->c = obj.c;
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj){
	if (this != &obj)
		this->c = obj.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack(){
}

// Member functions
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return (this->c.end());
}

