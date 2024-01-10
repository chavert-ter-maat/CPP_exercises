/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:40 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/04 16:44:44 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{

	ScavTrap scav("Scavmeister");
	scav.showInformation();
	
	ClapTrap clap;
	clap.attack("Scavmeister");
	std::cout << std::endl;
	scav.takeDamage(CLAP_ATTACK);
	scav.showInformation();
	scav.beRepaired(SCAV_REPAIR);
	scav.showInformation();

	scav.attack("clap");
	clap.takeDamage(SCAV_ATTACK);
	
	scav.guardgate();
	scav.guardgate();
	scav.guardgate();
}