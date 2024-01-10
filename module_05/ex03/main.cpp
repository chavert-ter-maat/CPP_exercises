/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/07 13:24:47 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void){
	Intern intern;
	try{
		intern.makeForm("presidential pardon", "Bender");
		intern.makeForm("robotomy request", "C-3PO");
		intern.makeForm("shrubbery creation", "R2-D2");
		intern.makeForm("bla bla", "bla");
	}
	catch(const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	return 0;
}