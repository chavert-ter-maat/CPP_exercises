/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 11:08:32 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl << "test1 for signForm" << std::endl;
	try{
		Bureaucrat dude1("dude1", -1);
		Form form1("form1");
		dude1.signForm(form1);
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "test2 for signForm" << std::endl;
	try{
		Bureaucrat dude2("dude2", 9);
		std::cout << dude2.getGrade() << std::endl;
		Form form2("form2");
		std::cout << form2 << std::endl;
		dude2.signForm(form2);
		std::cout << form2 << std::endl;
	}
	catch (const std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}