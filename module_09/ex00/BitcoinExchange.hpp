/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   BitcoinExchange.hpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:26:16 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/25 11:35:45 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
#include <string>
#include <ctime>
#include <sstream>


class BitcoinExchange{
	public:
	BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& obj);
	BitcoinExchange& operator=(const BitcoinExchange& obj);
	~BitcoinExchange();

	void	loadFiles(char *argv);
	void	parseDataFile(std::ifstream& data);
	int		verifyHeaderInfile(const std::string line);
	bool	verifyInfile(std::string line);
	void	parseDateInfile(std::string line);
	void	multiplyValue();
	void	printMap();
	
	private:
		std::map<long, double> _map;
		int	_value;
		int	_date;
};
#endif
