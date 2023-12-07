/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/06 12:52:20 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/07 13:19:13 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/* ************************** Orthodox Canonical **************************** */
Intern::Intern(){
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &obj){
	std::cout << "Intern copy constructor called" << std::endl;
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj) {
	std::cout << "Intern overload operator called" << std::endl;
	if (this != &obj){}
	return *this;
}

Intern::~Intern(){
	std::cout << "Intern deconstructor called" << std::endl;
}


/* *************************** Member functions ***************************** */
AForm* Intern::makepresform(const std::string& target){
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeshrubform(const std::string& target){
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makerobotoform(const std::string& target){
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeForm(const std::string& form, const std::string& target){
	std::string form_array[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm* (Intern::*creation[3])(const std::string&) \
	= {&Intern::makepresform, &Intern::makeshrubform, &Intern::makerobotoform};
	for(int i = 0; i < 3; i++){
		if(form == form_array[i])
			return (this->*creation[i])(target);
	}
	throw Intern::FormNotFound();
 }