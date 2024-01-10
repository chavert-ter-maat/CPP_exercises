/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:10:58 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 13:16:39 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* ************************** Orthodox Canonical **************************** */
Bureaucrat::Bureaucrat() : _name("Default"), _grade(0){
	std::cout << "Bureaucrat default constructor called" << std::endl;
}
	
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade){
	std::cout << "Bureaucrat constructor called" << std::endl;
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
	