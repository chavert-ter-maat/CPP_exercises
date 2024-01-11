/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScalarConverter.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/10 11:24:11 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/11 18:27:42 by chavertterm   ########   odam.nl         */
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

t_type	getType(std::string str){
	size_t i = 0;
	t_type type = UNKNOWN;
	
	if (is_double_pseudo(str))
			return (DOUBLEPSUEDO);
	if (is_float_pseudo(str))
		return (FLOATPSUEDO);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (isalpha(str[i]))
		type = CHAR;
	if (isalpha(str[i + 1]))
		type = UNKNOWN;
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
	return (type);
}

void	ScalarConverter::converter(std::string argument){
	t_type type;
	const char *str = argument.c_str();
	
	type = getType(str);
	switch(type){
		case CHAR:
			convert_char(str);
			break ;
		case INT:
			convert_int(str);
			break ;
		case FLOAT:
			convert_float(str);
			break ;
		case DOUBLE:
			convert_double_psuedo(str);
			break ;
		case DOUBLEPSUEDO:
			convert_double_psuedo(str);
			break ;
		case FLOATPSUEDO:
			convert_float_psuedo(str);
			break ;
		case UNKNOWN:
			std::cout << "Unkown stuff is going on\n";
			break ;
	}
}