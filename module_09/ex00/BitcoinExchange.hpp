/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:26:16 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/24 16:39:50 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
#include <string>


class BitcoinExchange{
	public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& obj);
	BitcoinExchange& operator=(const BitcoinExchange& obj);
	~BitcoinExchange();

	void	printMap();
	void	multiplyValue();
	void	parseData(std::ifstream& data);
	void	loadFile(char *argv);
	static int	verifyFirstLineInput(const std::string line);
	bool	verifyInput(std::string line);
	
	private:
		std::map<long, double> _map;
		int	_value;
		int	_date;
};

#endif
