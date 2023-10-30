/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/27 11:25:00 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/30 16:24:02 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

std::string	PhoneBook::get_line_func(void)
{
	std::string line;
	while (line == "")
	{
		if (!std::getline(std::cin, line))
		{
   	     std::cerr << "Failed to read a line." << std::endl;
   	     std::exit(EXIT_FAILURE);
		}
	}
	return line;
}

void	PhoneBook::set_contact(size_t i)
{
	std::string cmd;
	std::cout << "enter first name" << std::endl;
	cmd = PhoneBook::get_line_func();
	_contact_list[i].set_first_name(cmd);
	std::cout << "enter last name" << std::endl;
	cmd = PhoneBook::get_line_func();
	_contact_list[i].set_last_name(cmd);
	std::cout << "enter nickname" << std::endl;
	cmd = PhoneBook::get_line_func();
	_contact_list[i].set_nickname(cmd);
	std::cout << "enter phone number" << std::endl;
	cmd = PhoneBook::get_line_func();
	_contact_list[i].set_phone_number(cmd);
	std::cout << "enter secret" << std::endl;
	cmd = PhoneBook::get_line_func();
	_contact_list[i].set_secret(cmd);
}

std::string	PhoneBook::get_contact_trunc(int index, std::string func)
{
	std::string data;
	
	if (func == "first")
		data = _contact_list[index].get_first_name();
	else if (func == "last")
		data = _contact_list[index].get_last_name();
	else if (func == "nick")
		data = _contact_list[index].get_nickname();
	else
		return "";
	if (data.length() <= 10)
		return data;
	else
		return data.substr(0, 9) + ".";
}

	void	PhoneBook::search_contact(int sum_contacts)
{
		std::cout << std::endl;	
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "|    index|first name| last name| nick name|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		for (int index = 0; index < sum_contacts; index++)
		{
			if (index != 0)
				std::cout << std::endl;
			std::cout << "|" << std::setw(9) << index << "|";
			std::cout << std::setw(10) << get_contact_trunc(index, "first") << "|";
			std::cout << std::setw(10) << get_contact_trunc(index, "last") << "|";
			std::cout << std::setw(10) << get_contact_trunc(index, "nick") << "|";
		}
		std::cout << std::endl;	
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << std::endl;	
}

void	PhoneBook::print_contact(std::string line, int counter)
{
	int index = atoi(line.c_str());
	if (index >= counter)
	{
		std::cout << "invalid index" << std::endl;
		return ;
	}
	std::cout << "first name: " << _contact_list[index].get_first_name() << std::endl;
	std::cout << "last name: " << _contact_list[index].get_last_name() << std::endl;
	std::cout << "nickname: " << _contact_list[index].get_nickname() << std::endl;
	std::cout << "phone number: " << _contact_list[index].get_phone_number() << std::endl;
	std::cout << "secret: " << _contact_list[index].get_secret() << std::endl;
}