/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:27:43 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 13:50:11 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void	testShrubberyCreationForm(){
	std::cout << std::endl << "test ShruberyCreationForm" << std::endl;
	try{
		Bureaucrat henkie("Henky", 1);
		// Bureaucrat penkie("Penkie", 146);
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
	std::cout << std::endl << "test RobotomyRequest" << std::endl;
	try{
		Bureaucrat harry("Harry", 71);
		Bureaucrat barry("Barry", 73);
		RobotomyRequestForm bender("Bender");
		bender.execute(barry);
		for (int i = 0; i < 5; i++)
			bender.execute(harry);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
		}
	std::cout << std::endl;
}

void	testPresidential(void){
	try{
	std::cout << std::endl << "test PresidentialPardonForm" << std::endl;
	Bureaucrat pietje("Pietje", 4);
	PresidentialPardonForm form1("''Innocent_suspect''" );
	PresidentialPardonForm form2("");
	PresidentialPardonForm form3(form1);
	form2 = form1;
	
	form1.execute(pietje);
	form2.execute(pietje);
	form3.execute(pietje);
	std::cout << std::endl;
	
	Bureaucrat puckje("Puckje", 6);
	form1.execute(puckje);
	std::cout << std::endl;

	Bureaucrat plukje("Plukje", 151);
	form1.execute(plukje);
	std::cout << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
}

int	main(void){
	testPresidential();
	testRobotoRequest();
	testShrubberyCreationForm();
	return 0;
}