/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/19 15:11:11 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Canocical Orthodox
Span::Span() : _maxStored(0){
}

Span::Span(unsigned int N) : _maxStored(N), _vec(0){
}

Span::Span(const Span &obj){
	if (this != &obj){
		*this = obj;
	}
}

Span& Span::operator=(const Span &obj){
	if (this != &obj){
		this->_maxStored = obj._maxStored;
		this->_vec = obj._vec;
	}
	return (*this);
}

Span::~Span(){
}

// Member functions
void	Span::addNumber(int nb){
	if (this->_vec.size() >= this->_maxStored){
		throw ("Vector full");
	}
	this->_vec.push_back(nb);
	std::sort(this->_vec.begin(), this->_vec.end());
}

void	Span::print(){
	for (size_t i = 0; i < this->_vec.size(); i++){
		std::cout << this->_vec[i] << " ";
	}
	std::cout << std::endl;
}

uint	Span::shortestSpan(){
	if (this->_vec.size() < 2)
		throw ("Only 1 int present, ergo no span");
	int	span = 0;
	int	min_span = INT_MAX;
	for (uint i = 0; i < this->_vec.size() - 1; i++){
		span = this->_vec[i + 1] - this->_vec[i];
		if (span < min_span)
			min_span = span;	
	}
	return (static_cast<uint> (min_span));
}

uint	Span::longestSpan(){
	if (this->_vec.size() < 2)
		throw ("Only 1 int present, ergo no span");

	std::vector<int>::iterator min_element = std::min_element(this->_vec.begin(), this->_vec.end());
	std::vector<int>::iterator max_element = std::max_element(this->_vec.begin(), this->_vec.end());
	
	int min_int = *min_element;
	int max_int = *max_element;
	int longest_span = max_int - min_int;
	return (static_cast<uint> (longest_span));
}

void	Span::addRange(){
	uint	freeElements = this->_maxStored - (static_cast<uint>(this->_vec.size()));
	for (uint i = 0; i < freeElements; i++)
		addNumber(1);
}