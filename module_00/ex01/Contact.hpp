/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 13:32:10 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/27 16:21:06 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Contact
{
	public:
		void set_first_name(std::string string);
		void set_last_name(std::string string);
		void set_nickname(std::string string);
		void set_phone_number(std::string string);
		void set_secret(std::string string);

		std::string get_first_name(void);
		std::string get_last_name(void);
		std::string get_nickname(void);
		std::string get_phone_number(void);
		std::string get_secret(void);

		Contact();
		~Contact();

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_secret;
};