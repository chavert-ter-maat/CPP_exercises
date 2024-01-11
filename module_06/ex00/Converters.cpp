/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Converters.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/11 15:18:59 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/11 18:19:03 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iomanip>

void	convert_char(std::string str){
	std::cout << "Char: " << str << std::endl;
	std::cout << "Int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(str[0]) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << std::endl;	
}

void	convert_int(std::string str){
	try{
		size_t nb = stoi(str);
		std::cout << "Char: Non displayable\n";
		std::cout << "Int:" << nb << std::endl;
		std::cout << std::fixed << std::setprecision(1);
		std::cout << "Float: " << static_cast<float>(nb) << 'f' << std::endl;
		std::cout << "Double: " << static_cast<double>(nb) << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << "Exception caught: " << e.what() <<std::endl; 
	}
}

void	convert_float(std::string str){
	try{
		float nb = stof(str);
		std::cout << "Char: Non displayable\n";
		std::cout << "Int: " << static_cast<int>(nb) << std::endl;
		std::cout << "Float: " << nb << "f" << std::endl;
		std::cout << "Double: " << static_cast<double>(nb) << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << "Exception caught: " << e.what() <<std::endl; 
	}
}

void	convert_double(std::string str){
	try{
		double nb = stod(str);
		std::cout << "Char: Non displayable\n";
		std::cout << "int: " << static_cast<int>(nb) << std::endl;
		std::cout << "Float: " << static_cast<float>(nb) << 'f' << std::endl;
		std::cout << "Double: " << nb << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << "Exception caught: " << e.what() <<std::endl; 
	}
}

void	convert_double_psuedo(std::string str){
	std::cout << "Char: Non displayable\n";
	std::cout << "Int: Non displayable\n";
	std::cout << "Float: ";
	int i = 0;
	while (str[i]){
		std::cout << str[i];
		i++;
	}
		std::cout << "f\n";
	std::cout << "Double: ";
	i = 0;
	while (str[i]){
		std::cout << str[i];
		i++;
	}
	std::cout << std::endl;
}

void	convert_float_psuedo(std::string str){
	std::cout << "Char: Non displayable\n";
	std::cout << "Int: Non displayable\n";
	std::cout << "Float: ";
	int i = 0;
	while (str[i]){
		std::cout << str[i];
		i++;
	}
	std::cout << "\n";
	std::cout << "Double: ";
	i = 0;
	while (str[i] && str[i + 1]){
		std::cout << str[i];
		i++;
	}
	std::cout << std::endl;
}
