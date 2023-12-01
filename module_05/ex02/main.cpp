/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/01 16:10:43 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "test for beSigned" << std::endl;
	try{
		Bureaucrat dude1("dude1", 150);
		// std::cout << form1 << std::endl;
		// std::cout << form1 << std::endl;
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "test for signForm" << std::endl;
	try{
		Bureaucrat dude1("dude1", -1);
		std::cout << dude1.getGrade() << std::endl;
		// std::cout << form1 << std::endl;
		// std::cout << form1 << std::endl;
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}