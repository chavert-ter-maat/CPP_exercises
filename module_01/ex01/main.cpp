/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 15:12:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/15 16:31:07 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int horde_size = 10;
	Zombie *zombie_array;

	zombie_array = zombieHorde(horde_size, "zombie");
	for (int i = 0; i < horde_size; i++){
		std::cout << "nr: " << i+1 << " ";
		zombie_array[i].announce();
	}
	delete[] zombie_array;
	return(0);
}