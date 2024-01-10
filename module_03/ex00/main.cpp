/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:40 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/04 16:15:03 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Default;
	ClapTrap Freekie("Freekie");
	ClapTrap Sjaakie("Sjaakie");
	ClapTrap Sjonie(Sjaakie);
	Sjaakie = Freekie;
	
	std::cout << std::endl;
	Default.attack("Freekie");
	Freekie.takeDamage(CLAP_ATTACK);
	Default.showInformation();
	Freekie.showInformation();
	Freekie.beRepaired(CLAP_REPAIR);
	Freekie.showInformation();
	std::cout << std::endl;
	Freekie.attack("Sjaakie");
	Sjaakie.takeDamage(CLAP_ATTACK);
	Sjaakie.showInformation();
	Sjaakie.attack("Freekie");
	return 0;
}