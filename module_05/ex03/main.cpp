/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 09:22:49 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){
	try
	{
		Intern someRandomIntern;
		AForm*	rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;

		Intern someRandomIntern2;
		AForm*	rrf2;
		rrf2 = someRandomIntern2.makeForm("presidential pardon", "Bender2");
		delete rrf2;
		
		Intern	failingIntern;
		AForm* ff;
		ff = failingIntern.makeForm("bla bla", "bla");
		delete ff;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}