/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 11:40:06 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/15 16:29:32 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	std::cout << "Zombie creation on stack" << std::endl;
	randomChump("Henkie");
	randomChump("Pietje");
	randomChump("Keesie");
	
	std::cout << std::endl << "Zombie creation on heap" << std::endl;
	Zombie *chav = newZombie("Gappie");
	Zombie *gappie = newZombie("Flappie");
	chav->announce();
	gappie->announce();
	delete chav;
	delete gappie;
}