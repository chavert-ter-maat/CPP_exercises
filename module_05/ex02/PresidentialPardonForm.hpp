/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 15:49:07 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/04 14:50:38 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#define PRES_MIN_SIGN	25
#define PRES_MIN_EXE	5

class PresidentialPardonForm : public AForm
{
	private:
		std::string	_target;
	
	public:
		PresidentialPardonForm ();
		PresidentialPardonForm (const std::string name);
		// Copy constructor
    	PresidentialPardonForm(const PresidentialPardonForm &obj);
   		// Operator overload
    	PresidentialPardonForm& operator=(const PresidentialPardonForm &obj);
		~PresidentialPardonForm ();

		void execute(const Bureaucrat & executor);
};

#endif