/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 11:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/22 12:26:45 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

#define MIN_SIGN	10;
#define MIN_EXE		5;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		int					_signGrade;
		int					_executeGrade;

	public:
		Form();
		Form(const std::string name);
		~Form();
		
		friend std::ostream& operator<<(std::ostream& os, const Form& form);
		
		void	beSigned(Bureaucrat bureaucrat);
};