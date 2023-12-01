/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 15:49:07 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/01 16:23:07 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>

class Bureaucrat;

#define PRES_MIN_SIGN		25;
#define PRES_MIN_EXE		5;

class PresidentialPardonForm : public AForm;
{
	private
		const std::string	_name;

	public:
		PresidentialPardonForm ();
		PresidentialPardonForm (const std::string name);
		 ~PresidentialPardonForm ();
		std::ostream& operator<<(std::ostream& os, const AForm& form);
};

#endif