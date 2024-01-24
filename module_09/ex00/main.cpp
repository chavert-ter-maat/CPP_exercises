/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/24 12:47:30 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "wrong input" << std::endl;
		std::cerr << "expected input: <./btc> <filename.txt>" << std::endl;
		return 1;
	}
	try{
		BitcoinExchange	obj;
		obj.loadFile(argv[1]);		
	}
	catch(std::string &e){
		std::cerr << e << std::endl;
		return (EXIT_FAILURE);
	}
	return 0;
}