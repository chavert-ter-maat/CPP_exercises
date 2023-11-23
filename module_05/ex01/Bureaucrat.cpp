/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/23 10:06:40 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(0){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}
	
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "Burueaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat deconstructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat){
	os << bureaucrat._name << ", bureaucrat grade " <<  bureaucrat._grade << std::endl;
	return os;
}

std::string Bureaucrat::getName(){
	return this->_name;
}

int Bureaucrat::getGrade(){
	return this->_grade;
}

void Bureaucrat::decrementGrade(){
	std::cout << "grade --" << std::endl;
	this->_grade += 1;
	if (this->_grade >= 150)
		throw "GradeTooLowException";
}

void Bureaucrat::incrementGrade(){
	std::cout << "grade ++" << std::endl;
	this->_grade -= 1;
	if (this->_grade <= 0)
		throw "GradeTooHighException";
}

void	Bureaucrat::signForm(Form &form){
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (const std:: exception& e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because "
		<< e.what() << std::endl;
	} 
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Exception. Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Exception. Grade too low");
}