/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/22 12:37:25 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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

void	Form::beSigned(Bureaucrat bureaucrat){
	if (bureaucrat.getGrade() > this->_executeGrade || bureaucrat.getGrade() > this->_signGrade)
		throw "GradeTooLowException";
	this->_signed = true;
}