/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/10 11:20:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/10 13:18:17 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>

class ScalarConverter
{
	private:
		/* data */
		
	public:
		ScalarConverter();
		~ScalarConverter();
		
		enum scalar_type
		{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			
		};
		converter();
};
#endif