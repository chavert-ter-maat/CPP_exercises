/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/22 11:26:47 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat pietje("Pietje", 2);
	std::cout << pietje << std::endl;
	std::cout << pietje.getName() << std::endl;
	std::cout << pietje.getGrade() << std::endl;
	try
	{
		for (int i = 0; i < 151; i++)
			pietje.decrementGrade();
	}
	catch(const char *error)
	{
		std::cout << pietje.getGrade() << std::endl;
		std::cout << error << std::endl;
	}
	try
	{
		for (int i = 0; i < 151; i++)
			pietje.incrementGrade();
	}
	catch(const char *error)
	{
		std::cout << pietje.getGrade() << std::endl;
		std::cout << error << std::endl;
	}
	return 0;
}
