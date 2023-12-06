/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 13:46:51 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/* ************************** Orthodox Canonical **************************** */
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

Form::Form(const Form& obj){
	std::cout << "Form copy constructor called" << std::endl;
	*this = obj;
}

Form& Form::operator=(const Form& obj){
	std::cout << "Form overload operator called" << std::endl;
    if (this != &obj){
        this->_name = obj._name;
        this->_signed = obj._signed;
		this->_signGrade = obj._executeGrade;
		this->_executeGrade = obj._executeGrade;
    }
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