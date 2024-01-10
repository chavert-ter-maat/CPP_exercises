/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 15:49:07 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/07 12:54:19 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>

#define PRESIDENT_SIGN	25
#define PRESIDENT_EXEC	5


class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
    	PresidentialPardonForm(const PresidentialPardonForm &obj);
    	PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm();

		void execute(const Bureaucrat& executor);
};

#endif