/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 15:23:38 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/09 15:42:14 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	if (argc != 2)
	{
		std::cout << "wrong input" << std::endl;
		std::cout << "expected input ./Harl <level>" << std::endl;
		return 1;
	}
	std::string level(argv[1]);
	int int_level = std::atoi(argv[1]);
	if (int_level < 1 || int_level > 9)
	{
		std::cout << "wrong input" << std::endl;
		std::cout << "<level> has to be between 1 and 4" << std::endl;
		return 1;
	}
	// complain(level);
	return 0;
}