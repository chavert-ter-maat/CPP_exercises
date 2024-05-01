/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/04/29 14:33:00 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

// Canocical Orthodox
BitcoinExchange::BitcoinExchange(){
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){
	if (this != &obj){
		this->_map = obj._map; // std::map manages data and creates deep copies
	}
};

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &obj){
    this->_map = obj._map;
    return *this;
}

BitcoinExchange::~BitcoinExchange(){
};


// Member functions
void BitcoinExchange::printMap() {
    for (const auto& entry : _map) {
        std::cout << entry.first << ' ' << entry.second << std::endl;
    }
}

void	BitcoinExchange::multiplyValue(){
	std::map<long, double>::iterator it;
	it = this->_map.find(this->_date);
	if(it == this->_map.end()){
		it = this->_map.lower_bound(this->_date);
		if (it != this->_map.begin())
			it--;
	}
	std::cout << (this->_value * it->second) << std::endl;
}

void	BitcoinExchange::parseDateInfile(std::string line){
		std::string date_str = line.substr(0, line.find_first_of('|'));
		std::cout << date_str << "=> " << this->_value << " = ";
		date_str.erase(4, 1);
		date_str.erase(6, 1);
		this->_date = std::stoi(date_str);
	}

bool	BitcoinExchange::verifyInfile(std::string line){
	try{
		int year = std::stoi(line.substr(0, 4));
		if (year < 2009 || year > 2022)
			throw std::string("Error: Bad input");
		int month = std::stoi(line.substr(5, 6));
		if (month < 1 || month > 12)
			throw std::string("Error: Bad input");
		int day = std::stoi(line.substr(8, 9));
		if (day < 1 || day > 31)
			throw std::string("Error: Bad input");
		int i = 10;
		while((isspace(line[i]) || line[i] == '|') && line[i])
			i++;
		this->_value = std::stoi(line.substr(i));
		if (this->_value < 0 || this->_value > 1000)
			throw std::string("Invalid number");
	}
	catch(std::invalid_argument &e){
		std::cerr << e.what() << std::endl;
		return false;
	}
	catch(std::out_of_range &e){
		std::cerr << e.what() << std::endl;
		return false;
	}
	catch(std::string& e){
		std::cerr << e << std::endl;
		return false;
	}
	return true;
}

int BitcoinExchange::verifyHeaderInfile(const std::string line){
	if (strncmp(line.c_str(), "date", 4) == 0){
		int i = 4;
		while (isspace(line[i]))
			i++;
		if(line[i] == '|')
			i++;
		while(isspace(line[i]) )
			i++;
		if (strncmp(line.c_str() + i, "value", 5) == 0){
			i += 5;
			while(isspace(line[i]))
				i++;
			if (line[i + 1] == '\0'){
				return (true);
			}
		}
	}
	return (false);
}

void	BitcoinExchange::parseDataFile(std::ifstream& data){
	std::string	line;
	std::getline(data, line);
	while(getline(data, line)){
		std::string date_str = line.substr(0, line.find_first_of(','));
		std::string exchange_str = line.substr((line.find_first_of(',') + 1));
		date_str.erase(4, 1);
		date_str.erase(6, 1);
		this->_map.insert(std::make_pair<long, double>(std::stol(date_str), std::stod(exchange_str)));
	}
}