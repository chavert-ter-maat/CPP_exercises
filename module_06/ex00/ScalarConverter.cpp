/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/10 11:24:11 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/10 17:57:31 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


/* ************************** Orthodox Canonical **************************** */
ScalarConverter::ScalarConverter(){
	std::cout << "Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj){
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj){
	std::cout << "Asignment overload operator called" << std::endl;
	(void)obj;
	return (*this);
}

ScalarConverter::~ScalarConverter(){
	std::cout << "Default deconstructor called" << std::endl;
}


/* *************************** Member functions ***************************** */

int     is_double_pseudo(const std::string &str)
{
    if (str == "-inf" || str == "+inf" || str == "nan")
        return (true);
    return (false);
}

int     is_float_pseudo(const std::string &str)
{
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return (true);
    return (false);
}

t_type	getType(const std::string str){
	size_t i = 0;
	t_type type = UNKNOWN;
	
	if (is_double_pseudo(str))
			return (DOUBLEPSUEDO);
	if (is_float_pseudo(str))
		return (FLOATPSUEDO);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while(isdigit(str[i]))
		i++;
	if (str[i] == '.' || str[i] == ',')
	{
		i++;
		type = DOUBLE;
	}
	while(isdigit(str[i]))
		i++;
	if (str[i] == 'f')
	{
		i++;
		type = FLOAT;
	}
	if (str.length() == i)
		return (type == UNKNOWN ? INT : type);
	return (UNKNOWN);
}

void	ScalarConverter::converter(std::string argument){
	t_type type;
	const char *str = argument.c_str();
	
	type = getType(str);
	std::cout << type << std::endl;
}