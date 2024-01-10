/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 11:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 13:51:47 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

#define MIN_SIGN	10
#define MIN_EXE		5

class AForm // base class
{
	private:
		std::string		_name;
		bool			_signed;
		int				_signGrade;
		int				_executeGrade;

	public:
		AForm();
		AForm(const std::string name, const int sign_grade, const int exec_grade);
		AForm(const AForm& obj);
		AForm& operator=(const AForm &obj);
		virtual ~AForm();
		
		friend std::ostream& operator<<(std::ostream& os, const AForm& form);
		
		std::string getName() const;
		virtual void	beSigned(const Bureaucrat &obj);
		virtual void	execute(Bureaucrat const &executor) = 0;
		
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