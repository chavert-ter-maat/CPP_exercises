/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/24 17:02:26 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>

// Canocical Orthodox
BitcoinExchange::BitcoinExchange(){
};

BitcoinExchange::BitcoinExchange(const BitcoinExchange& obj){
	if (this != &obj){
		this->_map = obj._map; // std::map manages data and makes deep copies
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

void	BitcoinExchange::parseData(std::ifstream& data){
	std::string	line;
	std::getline(data, line);
	while(getline(data, line)){
		std::string date_str = line.substr(0, line.find_first_of(','));
		std::string exchange_str = line.substr((line.find_first_of(',') + 1));
		date_str.erase(4, 1);
		date_str.erase(6, 1);
		this->_map.insert(std::make_pair<long, double>(std::stol(date_str), std::stod(exchange_str)));
	}
	// printMap();
}

void	BitcoinExchange::BitcoinExchange::loadFile(char *argv){
	std::ifstream input(argv);
	std::ifstream data("./data.csv");
	if (!input.is_open() || !data.is_open())
		throw std::string("Unable to open file");
	parseData(data);
	std::string line;
	while (getline(input, line)){
		if (BitcoinExchange::verifyFirstLineInput(line) == true)
			continue ;
		if (BitcoinExchange::verifyInput(line) == true){ // rm class
			multiplyValue();
		}
	}
	input.close();
	data.close();
}

int BitcoinExchange::verifyFirstLineInput(const std::string line){
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

int	concatenateDate(int year, int month, int day){
	std::string s1 = std::to_string(year);
	std::string s2 = std::to_string(month);
	std::string s3 = std::to_string(day);
	
	std::string str_date = s1 + s2 + s3;
	return(stoi(str_date));
}

void	BitcoinExchange::multiplyValue(){
	std::map<long, double>::iterator it;
	// printMap();
	std::cout << "date: " << _date << std::endl;
	std::cout << "value: " << _value << std::endl;
	it = this->_map.find(this->_date);
	std::cout << it->second << std::endl;
	if(it == this->_map.end()){
		it = this->_map.lower_bound(this->_date);
		if (it != this->_map.begin())
			it--;
	}
	// std::cout << (this->_value * it->second) << std::endl;
}

bool	BitcoinExchange::verifyInput(std::string line){
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
		this->_date = concatenateDate(year, month, day);
		// std::cout << year << ' ' << month << ' ' << day << ' ' << value << ' ' << std::endl;
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
