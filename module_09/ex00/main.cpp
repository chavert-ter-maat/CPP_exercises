/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/25 11:34:05 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void	BitcoinExchange::BitcoinExchange::loadFiles(char *argv){
	std::ifstream inputFile(argv);
	std::ifstream dataFile("./data.csv");
	if (!inputFile.is_open() || !dataFile.is_open())
		throw std::string("Unable to open file");
	parseDataFile(dataFile);
	std::string line;
	while (getline(inputFile, line)){
		if (BitcoinExchange::verifyHeaderInfile(line) == true)
			continue ;
		if (verifyInfile(line) == true){
			parseDateInfile(line);
			multiplyValue();
		}
	}
	inputFile.close();
	dataFile.close();
}

int main(int argc, char **argv){
	if (argc != 2){
		std::cerr << "wrong input" << std::endl;
		std::cerr << "expected input: <./btc> <filename.txt>" << std::endl;
		return 1;
	}
	try{
		BitcoinExchange	obj;
		obj.loadFiles(argv[1]);		
	}
	catch(std::string &e){
		std::cerr << e << std::endl;
		return (EXIT_FAILURE);
	}
	return 0;
}