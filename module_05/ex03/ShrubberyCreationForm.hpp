/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/30 13:47:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 11:16:45 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

#define SHRUB_SIGN	145
#define SHRUB_EXEC	137


class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;
	
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm (std::string const target);
    	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm();

		void execute(const Bureaucrat& executor);
		class notCreated : public std::exception{
			public:
			const char* what() const throw();
		};
		class notOpened : public std::exception{
			public:
			const char* what() const throw();
		};
};

#endif