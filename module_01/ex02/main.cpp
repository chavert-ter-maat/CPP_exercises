/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 15:12:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/02 13:15:02 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string mystring = "HI THIS IS BRAIN";
	std::string *stringPTR = &mystring;
	std::string &stringREF = mystring;

	std::cout << "Memory address of myString: " << &mystring << std::endl;
	std::cout << "Memory address held by stringPTR " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The value of the string varaible: " << mystring << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	
	return(0);
}