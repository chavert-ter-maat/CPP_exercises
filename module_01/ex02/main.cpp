/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 15:12:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/15 16:34:29 by cter-maa      ########   odam.nl         */
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