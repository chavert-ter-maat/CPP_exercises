/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 11:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 11:17:50 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

#define MIN_SIGN	10
#define MIN_EXE		5

class Form
{
	public:
		Form();
		Form(const std::string name);
		Form(const Form& obj);
		Form& operator=(const Form& obj);
		~Form();

		void	beSigned(Bureaucrat &obj);
		bool	isSigned() const;
		std::string getName() const;
		
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
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;

};
std::ostream& operator<<(std::ostream& os, const Form& form);

#endif