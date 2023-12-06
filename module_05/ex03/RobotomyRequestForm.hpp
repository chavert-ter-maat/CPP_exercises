/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/05 08:44:10 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/05 11:00:34 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "cstdlib"

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#define ROBOT_SIGN	72
#define ROBOT_EXEC	137

class RobotomyRequestForm : public AForm
{
	private:
		std::string	_target;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm (std::string const target);
    	RobotomyRequestForm(const RobotomyRequestForm &obj);
    	RobotomyRequestForm& operator=(const RobotomyRequestForm &obj);
		~RobotomyRequestForm();

		void execute(const Bureaucrat& executor);
};

#endif