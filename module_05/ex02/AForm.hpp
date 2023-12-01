/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 11:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/01 16:21:13 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

#define MIN_SIGN	10;
#define MIN_EXE		5;

class AForm // base class
{
	protected:
		const std::string	_name;
		bool				_signed;
		int					_signGrade;
		int					_executeGrade;
	
	public:
		AForm();
		AForm(const std::string name);
		 ~AForm();
		
		friend std::ostream& operator<<(std::ostream& os, const AForm& form);
		
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
};

#endif