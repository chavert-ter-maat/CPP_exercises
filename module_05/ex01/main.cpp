/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/22 12:38:23 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	try
	{
		Bureaucrat dude1("dude1", 5);
		Form form1("form1");
	// std::cout << form1 << std::endl;
		form1.beSigned(dude1);
		std::cout << form1 << std::endl;
	}
	catch (const char *error)
	{
		std::cout << error << std::endl;
	}
	
	//////////////// signForm() not yet written ////////////////////
	return 0;
}