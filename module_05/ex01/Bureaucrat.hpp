/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:11:00 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 08:08:02 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

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