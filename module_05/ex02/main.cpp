/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 15:08:27 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	testShrubberyCreationForm(){
	std::cout << "---- test ShruberyCreationForm ----" << std::endl <<std::endl;
	try{
		Bureaucrat henkie("Henky", 1);
		ShrubberyCreationForm form1("ShrubShrub");
		
		// form1.execute(penkie);
		form1.execute(henkie);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

void	testRobotoRequest(){
	std::cout << "---- test RobotomyRequest ----" << std::endl;
	try{
		Bureaucrat harry("Harry", 71);
		RobotomyRequestForm bender("Bender");
		for (int i = 0; i < 5; i++){
			bender.execute(harry);
			std::cout << std::endl;
		}
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
		}
	std::cout << std::endl;
}

void	testPresidential(void){
	std::cout << "---- test PresidentialPardonForm ----" << std::endl;

	try{
	PresidentialPardonForm form1("''Form of Innocent_Suspect''" );
	Bureaucrat plukje("Plukje", 151);
	form1.execute(plukje);
	std::cout << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	Bureaucrat puckje2("Puckje2", 4);
	PresidentialPardonForm form2("''Form of Innocent_Suspect''" );
	puckje2.executeForm(form2);
	std::cout << std::endl;
}

int	main(void){
	testPresidential();
	std::cout << std::endl;
	testRobotoRequest();
	std::cout << std::endl;
	testShrubberyCreationForm();
	return 0;
}