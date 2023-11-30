/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/30 11:54:04 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	
	std::cout << "test for beSigned" << std::endl;
	try{
		Bureaucrat dude1("dude1", 150);
		Form form1("form1");
		// std::cout << form1 << std::endl;
		form1.beSigned(dude1);
		// std::cout << form1 << std::endl;
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl << "test for signForm" << std::endl;
	try{
		Bureaucrat dude1("dude1", -1);
		std::cout << dude1.getGrade() << std::endl;
		Form form1("form1");
		// std::cout << form1 << std::endl;
		dude1.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}