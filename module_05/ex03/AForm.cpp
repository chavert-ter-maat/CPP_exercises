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
#include <iostream>

/* ************************** Orthodox Canonical **************************** */
AForm::AForm() : _name("Default"), _signed(false), _signGrade(MIN_SIGN), 
	_executeGrade(MIN_EXE){
	std::cout << "AForm default constructor is called" << std::endl;
}
	
AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) 
	: _name(name), _signed(false), _signGrade(sign_grade), _executeGrade(exec_grade){
	std::cout << "AForm constructor is called" << std::endl;
}

AForm::AForm(const AForm &obj){
	std::cout << "AForm copy constructor called" << std::endl;
	*this = obj;
}

AForm& AForm::operator=(const AForm& obj){
	std::cout << "Form overload operator called" << std::endl;
    if (this != &obj){
        this->_name = obj._name;
        this->_signed = obj._signed;
		this->_signGrade = obj._executeGrade;
		this->_executeGrade = obj._executeGrade;
    }
	return (*this);
}

AForm::~AForm(){
	std::cout << "AForm deconstructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const AForm& form){
	os << std::endl << form._name << std::endl 
	<< "To sign this form the AForm needs to have a minimum grade of: " <<  form._signGrade << std::endl
	<< "To execute this form the AForm needs to have a minimum grade of: " << form._executeGrade << std::endl
	<< "This form is signed: " << form._signed << std::endl;
	return os;
}

/* *************************** Member functions ***************************** */
std::string AForm::getName() const{
	return this->_name;
}

const char *AForm::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

const char *AForm::GradeIsWrong::what() const throw(){
	return ("Wrong grade");
}

void	AForm::beSigned(Bureaucrat const &bureaucrat){
	if (bureaucrat.getGrade() <= 0 || bureaucrat.getGrade() > 150)
		throw GradeIsWrong();
	if (bureaucrat.getGrade() == 0)
		throw GradeTooHighException();
	if (bureaucrat.getGrade() > this->_executeGrade || bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}