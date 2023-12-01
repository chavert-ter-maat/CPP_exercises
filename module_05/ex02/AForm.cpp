/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/30 11:52:17 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm() : _name("Default"){
	this->_signed = false;
	this->_signGrade = MIN_SIGN;
	this->_executeGrade = MIN_EXE;
	std::cout << "AForm default constructor is called" << std::endl;
}
	
AForm::AForm(const std::string name) : _name(name){
	this->_signed = false;
	this->_signGrade = MIN_SIGN;
	this->_executeGrade = MIN_EXE;
	std::cout << "AForm constructor is called" << std::endl;
}

AForm::~AForm(){
	std::cout << "AForm deconstructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& form){
	os << std::endl << form._name << std::endl 
	<< "To sign this form the bureaucrat needs to have a minimum grade of: " <<  form._signGrade << std::endl
	<< "To execute this form the bureaucrat needs to have a minimum grade of: " << form._executeGrade << std::endl
	<< "This form is signed: " << form._signed << std::endl;
	return os;
}

std::string AForm::getName(){
	return this->_name;
}

const char *AForm::GradeTooHighException::what() const throw(){
	return ("GradeTooHigh");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("GradeTooLow");
}

const char *AForm::GradeIsWrong::what() const throw(){
	return ("WrongGrade");
}

void	AForm::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() <= 0)
		throw GradeIsWrong();
	if (bureaucrat.getGrade() == 0)
		throw GradeTooHighException();
	if (bureaucrat.getGrade() > this->_executeGrade || bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}