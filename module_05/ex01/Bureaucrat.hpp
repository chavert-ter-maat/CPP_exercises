/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:11:00 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/22 12:08:00 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	
	friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
	
	std::string	getName();
	int			getGrade();
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(Form& form);

	class GradeTooLowException : public std::exception{
		public:
		const char* what() const throw();
	};
	class GradeTooHighException : public std::exception{
		public:
		const char* what() const throw();
	};
};

#endif