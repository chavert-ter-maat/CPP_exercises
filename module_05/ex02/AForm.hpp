/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 11:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/30 13:46:40 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

#define MIN_SIGN	10;
#define MIN_EXE		5;

class Form
{
	class GradeTooHighException : public std::exception {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
        virtual const char *what() const throw();
    };
	class GradeIsWrong : public std::exception {
		virtual const char *what() const throw();
	};
	
	protected:
		const std::string	_name;
		bool				_signed;
		int					_signGrade;
		int					_executeGrade;

	public:
		Form();
		Form(const std::string name);
		~Form();
		
		friend std::ostream& operator<<(std::ostream& os, const Form& form);
		
		void		beSigned(Bureaucrat &obj);
		std::string getName();
};

#endif