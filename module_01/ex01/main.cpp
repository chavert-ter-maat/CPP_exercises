/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 15:12:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/02 11:36:33 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int horde_size = 10;
	Zombie *zombie_array;

	zombie_array = zombieHorde(horde_size, "zombie");
	for (int i = 0; i < horde_size; i++){
		std::cout << "nr: " << i << " ";
		zombie_array[i].announce();
	}
	delete[] zombie_array;
	system("leaks zombieHorde");
	return(0);
}