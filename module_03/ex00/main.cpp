/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:40 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/20 14:07:32 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Default;
	ClapTrap Freekie("Freekie");
	ClapTrap Sjaakie("Sjaakie");
	ClapTrap Sjonie(Sjaakie);
	// Sjaakie = Freekie;
	
	std::cout << std::endl;
	Default.attack("Freekie");
	Freekie.takeDamage(3);
	Default.showInformation();
	Freekie.showInformation();
	Freekie.beRepaired(115);
	Freekie.showInformation();
	std::cout << std::endl;
	Freekie.attack("Sjaakie");
	Sjaakie.takeDamage(112);
	Sjaakie.showInformation();
	Sjaakie.attack("Freekie");
	return 0;
}