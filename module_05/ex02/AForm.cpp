/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/30 11:52:17 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _name("Default"){
	this->_signed = false;
	this->_signGrade = MIN_SIGN;
	this->_executeGrade = MIN_EXE;
	std::cout << "Form default constructor is called" << std::endl;
}
	
Form::Form(const std::string name) : _name(name){
	this->_signed = false;
	this->_signGrade = MIN_SIGN;
	this->_executeGrade = MIN_EXE;
	std::cout << "Form constructor is called" << std::endl;
}

Form::~Form(){
	std::cout << "Form deconstructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Form& form){
	os << std::endl << form._name << std::endl 
	<< "To sign this form the bureaucrat needs to have a minimum grade of: " <<  form._signGrade << std::endl
	<< "To execute this form the bureaucrat needs to have a minimum grade of: " << form._executeGrade << std::endl
	<< "This form is signed: " << form._signed << std::endl;
	return os;
}

std::string Form::getName(){
	return this->_name;
}

const char *Form::GradeTooHighException::what() const throw(){
	return ("GradeTooHigh");
}

const char *Form::GradeTooLowException::what() const throw(){
	return ("GradeTooLow");
}

const char *Form::GradeIsWrong::what() const throw(){
	return ("WrongGrade");
}

void	Form::beSigned(Bureaucrat &bureaucrat){
	if (bureaucrat.getGrade() <= 0)
		throw GradeIsWrong();
	if (bureaucrat.getGrade() == 0)
		throw GradeTooHighException();
	if (bureaucrat.getGrade() > this->_executeGrade || bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}