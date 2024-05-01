/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 09:36:33 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat pietje("Pietje", -2);
		std::cout << pietje << std::endl;
		std::cout << "Name: " << pietje.getName() << std::endl;
		std::cout << "Grade: " << pietje.getGrade() << std::endl;
			for (int i = 0; i < 151; i++)
				pietje.decrementGrade();
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		Bureaucrat pietje("Pietje", 145);
		for (int i = 0; i < 151; i++){
			std::cout << "Grade: " << pietje.getGrade() << std::endl;
			pietje.incrementGrade();
		}
			
	}
	catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
