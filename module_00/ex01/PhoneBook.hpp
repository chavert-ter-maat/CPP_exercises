/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 13:31:39 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/30 16:23:34 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"
#include	<iomanip>
#include	<iostream>
#include	<cstdlib>


class PhoneBook 
{
	public:
		std::string	get_line_func(void);
		std::string	get_contact_trunc(int index, std::string func);
		void		set_contact(size_t i);
		// void	print_contact(std::string data, std::string end);
		void		search_contact(int counter);
		void		print_contact(std::string line, int counter);
		
	private:
		Contact _contact_list[8];
};