/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:40 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 08:48:57 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap scav0;
	ScavTrap scav1("Scavmeister");
	scav1.showInformation();
	scav1.guardgate();
	scav1.guardgate();
	scav1.guardgate();
}