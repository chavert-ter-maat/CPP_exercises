/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 11:25:00 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/27 16:42:29 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::set_contact(size_t i)
{
	std::string cmd;
	std::cout << "enter first name" << std::endl;
	std::cin >> cmd;
	_contact_list[i].set_first_name(cmd);
	std::cout << "enter last name" << std::endl;
	std::cin >> cmd;
	_contact_list[i].set_last_name(cmd);
	std::cout << "enter nickname" << std::endl;
	std::cin >> cmd;
	_contact_list[i].set_nickname(cmd);
	std::cout << "enter phone number" << std::endl;
	std::cin >> cmd;
	_contact_list[i].set_phone_number(cmd);
	std::cout << "enter secret" << std::endl;
	std::cin >> cmd;
	_contact_list[i].set_secret(cmd);
}

// void	PhoneBook::print_contact(std::string data, std::string end)
	void	PhoneBook::print_contact(void)
{
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|     index|first name| last name| nick name|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << std::endl;	
}

// void	PhoneBook::search_contact(int lenght)