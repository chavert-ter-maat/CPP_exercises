/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/05/01 16:41:32 by cter-maa      ########   odam.nl         */
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
	getline(inputFile, line);
	if (BitcoinExchange::verifyHeaderInfile(line) != true){
		std::cerr <<  "Error. Incorrect header" << std::endl;
		exit(EXIT_FAILURE);
	}
	while (getline(inputFile, line)){
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