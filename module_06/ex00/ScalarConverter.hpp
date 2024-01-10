/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/10 11:20:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/10 17:57:22 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>

typedef enum 
	{
		CHAR,
		INT,
		FLOAT,
		DOUBLE,
		DOUBLEPSUEDO,
		FLOATPSUEDO,
		UNKNOWN
	} t_type;

class ScalarConverter
{
	public:
		static void	converter(std::string argument);
		
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter &operator=(const ScalarConverter &obj);
		~ScalarConverter();
		
	typedef void(*t_func)(std::string &);
};
#endif