/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/09 15:23:38 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/24 14:11:55 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv){
	Harl harl;
	if (argc != 2)
	{
		std::cout << "wrong input" << std::endl;
		std::cout << "expected input ./Harl <DEBUG/INFO/WARNING/ERROR>" << std::endl;
		return 1;
	}
	std::string level(argv[1]);
	harl.complain(level);
	return 0;
}
