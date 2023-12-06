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

//* ************************** Orthodox Canonical **************************** */
AForm::AForm() : _name("Default"), _signed(false), _signGrade(MIN_SIGN), 
	_executeGrade(MIN_EXE){
	std::cout << "AForm default constructor is called" << std::endl;
}
	
AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) 
	: _name(name), _signed(false), _signGrade(sign_grade), _executeGrade(exec_grade){
	std::cout << "AForm constructor is called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	std::cout << "Bureaucrat overload operator called" << std::endl;
    if (this != &obj){
        this->_name = obj._name;
        this->_grade = obj._grade;
    }
    return *this;
}

AForm::~AForm(){
	std::cout << "AForm deconstructor called" << std::endl;
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