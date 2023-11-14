/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 13:51:39 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/14 14:50:06 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>
#include	<iomanip>
#include	<cstdlib>
#include	<limits>
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
		std::cout << std::setw(9) << "enter: ADD, SEARCH, EXIT" << std::endl; 
		if (!std::getline(std::cin, cmd))
			std::exit(EXIT_FAILURE);
		if (cmd == "")
			std::getline(std::cin, cmd);
		if (cmd == "exit" || cmd == "EXIT")
			std::exit(EXIT_SUCCESS);
		if (cmd == "add" || cmd == "ADD")
		{
			if (index == MAX)
				index = 0;
			phonebook.set_contact(index);
			std::cout << "you added a contact on index " << index << std::endl;
			counter += 1;
			index += 1;
		}
		if (cmd == "search" || cmd == "SEARCH")
		{
			if (counter == 0)
			{
				std::cout << "phonebook is empty" << std::endl;
				continue ;
			}
			else
			{
				if (counter > MAX)
					counter = MAX;
				phonebook.search_contact(counter);
				std::cout << "enter index number" << std::endl;
				cmd = "";
				int flag = 0;
				while (flag == 0)
				{
					if (!std::getline(std::cin, cmd))
						std::exit(EXIT_FAILURE);
					else if (cmd != "")
						flag = phonebook.print_contact(cmd, counter);
				}	
			}
		}
	}
	return 0;
}