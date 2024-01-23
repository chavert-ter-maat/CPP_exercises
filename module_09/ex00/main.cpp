/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/23 11:55:46 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "wrong input" << std::endl;
        std::cout << "expected input: <./btc> <filename>" << std::endl;
        return 1;
    }
    std::ifstream file(argv[1]);
    if (!file.is_open()){
        std::cout << "file couldn't be opened" << std::endl;
        return 1;
    }
    return 0;
}