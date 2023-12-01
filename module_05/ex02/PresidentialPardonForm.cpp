/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 15:55:48 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/01 16:17:39 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _name("Default"){
	this->_signed = false;
	this->_signGrade = MIN_SIGN;
	this->_executeGrade = MIN_EXE;
	std::cout << "PresidentialPardonForm default constructor is called" << std::endl;
}
	
PresidentialPardonForm::PresidentialPardonForm(const std::string name) : _name(name){
	this->_signed = false;
	this->_signGrade = MIN_SIGN;
	this->_executeGrade = MIN_EXE;
	std::cout << "PresidentialPardonForm constructor is called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm deconstructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& form){
	os << std::endl << form._name << std::endl 
	<< "To sign this form the bureaucrat needs to have a minimum grade of: " <<  form._signGrade << std::endl
	<< "To execute this form the bureaucrat needs to have a minimum grade of: " << form._executeGrade << std::endl
	<< "This form is signed: " << form._signed << std::endl;
	return os;
}

std::string PresidentialPardonForm::getName(){
	return this->_name;
}

const char *PresidentialPardonForm::GradeTooHighException::what() const throw(){
	return ("GradeTooHigh");
}

const char *PresidentialPardonForm::GradeTooLowException::what() const throw(){
	return ("GradeTooLow");
}

const char *PresidentialPardonForm::GradeIsWrong::what() const throw(){
	return ("WrongGrade");
}

void	PresidentialPardonForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() <= 0)
		throw GradeIsWrong();
	if (bureaucrat.getGrade() == 0)
		throw GradeTooHighException();
	if (bureaucrat.getGrade() > this->_executeGrade || bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}