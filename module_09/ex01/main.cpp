/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/05/01 17:11:11 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv){
	if (argc != 2 || strcmp(argv[1], "") == 0) {
		std::cerr << "wrong input" << std::endl;
		std::cerr << "expected input: <./RPN> <input>" << std::endl;
		return 1;
	}
	try{
		std::string str = argv[1];
		RPN	obj;
		obj.rpn(str);
	}
	catch(std::string &e){
		std::cerr << e << std::endl;
		return (EXIT_FAILURE);
	}
	return 0;
}