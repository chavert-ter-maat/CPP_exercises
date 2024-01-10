/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:40 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/04 16:34:06 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap scav1("Scavmeister");
	scav1.guardgate();

	std::cout << std::endl;
	FragTrap frag1("Frageroni");
	frag1.showInformation();
	frag1.highFivesGuys();
	scav1.attack("Frageroni");
	for (int i = 0; i < 5; i++)
		frag1.takeDamage(SCAV_ATTACK);
	frag1.showInformation();
	frag1.highFivesGuys();
	std::cout << std::endl;
}