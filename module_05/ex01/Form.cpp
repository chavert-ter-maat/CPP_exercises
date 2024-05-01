/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 11:07:32 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/* ************************** Orthodox Canonical **************************** */
Form::Form() : _name("Default"), _signed(false), _signGrade(MIN_SIGN), _executeGrade(MIN_EXE) {
    std::cout << "Form default constructor is called" << std::endl;
}

Form::Form(const std::string name) : _name(name), _signed(false), _signGrade(MIN_SIGN), _executeGrade(MIN_EXE) {
    std::cout << "Form constructor is called" << std::endl;
}

Form::Form(const Form& obj) : _name(obj._name), _signed(obj._signed), _signGrade(obj._signGrade), _executeGrade(obj._executeGrade){
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other) {
    std::cout << "Form overload operator called" << std::endl;
    if (this != &other) {
        _signed = other._signed;
    }
    return *this;
}

Form::~Form(){
	std::cout << "Form deconstructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Form& form){
	os << std::endl << form.getName() << std::endl 
	<< "To sign this form the bureaucrat needs to have a minimum grade of: " <<  MIN_EXE << std::endl
	<< "To execute this form the bureaucrat needs to have a minimum grade of: " << MIN_SIGN << std::endl
	<< "This form is signed: " << form.isSigned() << std::endl;
	return os;
}

bool	Form::isSigned() const{
	return this->_signed;
}

std::string Form::getName() const{
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
	if (bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		this->_signed = true;
}