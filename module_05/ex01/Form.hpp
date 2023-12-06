/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 11:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 13:45:40 by cter-maa      ########   odam.nl         */
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
	public:
		Form();
		Form(const std::string name);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form();
		friend std::ostream& operator<<(std::ostream& os, const Form& form);
		
		void		beSigned(Bureaucrat &obj);
		std::string getName();
		
		class GradeTooHighException : public std::exception {
    	    virtual const char *what() const throw();
    	};
    	class GradeTooLowException : public std::exception {
    	    virtual const char *what() const throw();
    	};
		class GradeIsWrong : public std::exception {
			virtual const char *what() const throw();
		};
	
	private:
		std::string			_name;
		bool				_signed;
		int					_signGrade;
		int					_executeGrade;

};

#endif