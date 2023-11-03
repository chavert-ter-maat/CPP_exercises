/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 13:33:26 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/30 13:58:34 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
	
	void Contact::set_first_name(std::string string)
	{
		_first_name = string;
	}
	
	void Contact::set_last_name(std::string string)
	{
		_last_name = string;
	}
	
	void Contact::set_nickname(std::string string)
	{
		_nickname = string;	
	}
	
	void Contact::set_phone_number(std::string string)
	{
		_phone_number = string;
	}
	
	void Contact::set_secret(std::string string)
	{
		_secret = string;	
	}
	
	std::string Contact::get_first_name(void)
	{
		return _first_name;
	}
	
	std::string Contact::get_last_name(void)
	{
		return _last_name;	
	}

	std::string Contact::get_phone_number(void)
	{
		return _phone_number;	
	}

	std::string Contact::get_nickname(void)
	{
		return _nickname;	
	}
	
	std::string Contact::get_secret(void)
	{
		return _secret;
	}
	Contact::Contact() : _first_name(""), _last_name(""), _nickname(""), _phone_number(""), _secret(""){
	}

	Contact::~Contact() {
		std::cout << this << std::endl;
	}