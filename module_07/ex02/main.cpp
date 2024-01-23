/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/22 15:04:29 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <algorithm>

int main(void){
	try{
		std::cout << "Int tests: " << std::endl;
		int * a = new int(5);
		std::cout << *a <<std::endl;
	
		Array<int> defaultArray;
		Array<int> lenArray(5);
		Array<int> copyArray(lenArray);
		std::cout << "size lenArray = " <<lenArray.size() << std::endl;
		std::cout << "size copyArray = " <<copyArray.size() << std::endl;
	}
	catch(const std::exception &e){
		std::cout << &e << std::endl;
	}
	
	try{
		std::cout << std::endl << "Char tests: " << std::endl;
		char arr[] = "abc";
		Array<char> lenArr(3);
		Array<char> newArr(arr);
		std::cout << newArr.size() << std::endl;
		newArr.print_array();
		Array<char> lenArray(2);
		
		Array<char> clone;
		clone  = arr;
		clone.print_array();
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "Out of bound test: " << std::endl;
	try{
		Array<int> out_of_bound;
		std::cout << out_of_bound[3] << std::endl;
	}
	catch(const std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
