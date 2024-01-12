/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Serializer.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 12:24:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/12 15:20:28 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// Orthodox Canocial
Serializer::Serializer(){
}

Serializer::Serializer(const Serializer &obj){
	*this = obj;
}

Serializer &Serializer::operator=(const Serializer &obj){
	if (this != &obj)
		*this = obj;
	return *this;		
}

Serializer::~Serializer(){
}

// Member Functions
uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}