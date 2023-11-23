/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/23 10:17:04 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat dude1("dude1", 15);
		Form form1("form1");
		std::cout << form1 << std::endl;
		form1.beSigned(dude1);
		std::cout << form1 << std::endl;
	// std::cout << form1 << std::endl;
	}
	catch (const char *error)
	{
		std::cout << error << std::endl;
	}
	//////////////// signForm() not yet tested ////////////////////
	return 0;
}