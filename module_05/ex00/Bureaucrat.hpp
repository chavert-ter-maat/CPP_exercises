/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 09:11:00 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/22 10:07:41 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();
	
	friend std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);
	
	std::string	getName();
	int	getGrade();
	void	incrementGrade();
	void	decrementGrade();
};