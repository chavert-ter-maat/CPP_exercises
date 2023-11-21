/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:40 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 08:47:34 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap scav0;
	ScavTrap scav1("Scavmeister");
	scav1.guardgate();
	scav1.guardgate();
	scav1.guardgate();
	
	std::cout << std::endl;
	FragTrap frag0;
	FragTrap frag1("Frageroni");
	frag1.showInformation();
	frag1.highFivesGuys();
	std::cout << std::endl;
}