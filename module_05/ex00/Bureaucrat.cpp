/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 10:39:32 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************** Orthodox Canonical **************************** */
Bureaucrat::Bureaucrat() : _name("Default"), _grade(1){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}
	
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
	if (grade <= 0)
		throw (GradeTooLowException());
	if (grade > 150)
		throw (GradeTooHighException());
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj)  : _name(obj._name), _grade(obj._grade){
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	std::cout << "Bureaucrat overload operator called" << std::endl;
    if (this != &obj){
        this->_grade = obj._grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat deconstructor called" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat){
	os << bureaucrat.getName() << ", bureaucrat grade " <<  bureaucrat.getName() << std::endl;
	return os;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade is too low");
}

std::string	Bureaucrat::getName() const{
	return this->_name;
}

int Bureaucrat::getGrade(){
	return this->_grade;
}

void Bureaucrat::decrementGrade(){
	if (this->_grade > 150)
		throw GradeTooLowException();
	std::cout << "grade --" << std::endl;
	this->_grade += 1;
}

void Bureaucrat::incrementGrade(){
	if (this->_grade <= 0)
		throw GradeTooHighException();
	std::cout << "grade ++" << std::endl;
	this->_grade -= 1;
}
	