/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 13:31:39 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/27 16:10:38 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook 
{
	public:
		void	set_contact(size_t i);
		// void	print_contact(std::string data, std::string end);
		void	print_contact(void);
		void	search_contact(int lenght);
		
	private:
		Contact _contact_list[8];
};