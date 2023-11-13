/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 11:40:06 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/01 14:59:51 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	std::cout << "Zombie creation on stack" << std::endl;
	randomChump("Henkie");
	randomChump("Pietje");
	randomChump("Freekie");
	
	std::cout << std::endl << std::endl << "Zombie creation on heap" << std::endl;
	Zombie *chav = newZombie("Chavie");
	Zombie *gappie = newZombie("Gappie");
	chav->announce();
	gappie->announce();
	delete chav;
	delete gappie;
}