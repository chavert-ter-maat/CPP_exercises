/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 13:51:39 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/27 16:56:31 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<cstdlib>
#include	"PhoneBook.hpp"
#define		MAX 8

int	main(void)
{
	size_t index = 0;
	size_t	counter = 0;
	PhoneBook phonebook;
	
	std::string cmd;
	while (true)
	{
		std::cout << "enter: (ADD), (SEARCH), (EXIT)" << std::endl; 
		if (!std::getline(std::cin, cmd))
			std::exit(EXIT_FAILURE);
		if (cmd == "exit" || cmd == "EXIT")
			std::exit(EXIT_SUCCESS);
		else if (cmd == "add" || cmd == "ADD")
		{
			if (index == MAX)
				index = 0;
			phonebook.set_contact(index);
			counter += 1;
			index += 1;
		}
		else if (cmd == "search" || cmd == "SEARCH")
		{
			if (counter == 0)
			{
				std::cout << "Phonebook is empty, ";
				continue ;
			}
			else
			{
				phonebook.print_contact();
			}	
		}
	}
	return 0;
}