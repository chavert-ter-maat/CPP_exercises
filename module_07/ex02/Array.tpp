/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.tpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/16 12:56:09 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/18 14:40:55 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// Orthodox Canonical
template <typename T>
Array<T>::Array() : _ptr(nullptr), _size(0){
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(size_t n) : _size(n){
	std::cout << "Array constructor called" << std::endl;
	this->_ptr = new T[n];
}

template <typename T> 
Array<T>::Array(T *arr){
	std::cout << "Array constructor called" << std::endl;
	int len = 0;
	while(arr[len])
		len++;
	this->_ptr = new T[len + 1];
	this->_size = len;
	for (int i = 0; i < len; i++)
		this->_ptr[i] = arr[i];
	this->_ptr[len] = '\0';
}
	
template <typename T>
Array<T>::Array(const Array &obj){
	std::cout << "Array copy constructor called" << std::endl;
	this->_size = obj._size;
	this->_ptr = new T[obj._size];
	for (int i = 0; i < this->_size; i++)
		this->_ptr[i] = obj._ptr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &obj){
	if (this != &obj){
		std::cout << "Assigment overload operator called" << std::endl;
		delete[] this->_ptr;
		this->_size = obj._size;
		this->_ptr = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
			this->_ptr[i] = obj._ptr[i];	
	}
	return (*this);
}

template <typename T>
const char *Array<T>::IndexException::what() const throw(){
	return ("Index out of bound");
}

template <typename T>
T &Array<T>::operator[](int index){
	if (index >= this->_size)
		throw IndexException();
	return (this->_ptr[index]);
}

template <typename T>
Array<T>::~Array(){
	std::cout << "Array Destructor called" << std::endl;
	delete[] this->_ptr;
}


// Templates 

template <typename T> 
void	Array<T>::print_array(){
	for (int i = 0; i < this->_size; i++)
		std::cout << " " << _ptr[i];
	std::cout << std::endl;
}

template <typename T>
int	Array<T>::size(){
	return (this->_size);
}