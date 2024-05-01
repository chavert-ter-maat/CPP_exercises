/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AForm.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 11:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/03/12 14:57:59 by cter-maa      ########   odam.nl         */
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
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_executeGrade;

	public:
		AForm();
		AForm(const std::string name, const int sign_grade, const int exec_grade);
		AForm(const AForm& obj);
		AForm& operator=(const AForm &obj);
		virtual ~AForm();
		
		std::string 	getNameForm() const;
		bool			isSigned() const;
		virtual void	beSigned(const Bureaucrat &obj);
		void			canBeSigned(Bureaucrat const &bureaucrat) const;
		virtual bool	execute(Bureaucrat const &executor) const = 0;
		
		class GradeTooHighException : public std::exception {
    	    virtual const char *what() const throw();
    	};
    	class GradeTooLowException : public std::exception {
    	    virtual const char *what() const throw();
    	};
		class GradeIsWrong : public std::exception {
			virtual const char *what() const throw();
		};

		class isSigned : public std::exception {
			virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif