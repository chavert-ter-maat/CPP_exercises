/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 11:39:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/01 14:45:52 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
	
// It creates a zombie, name it, and the zombie announces itself.
void	randomChump(std::string name){
	Zombie zombie(name);
	
	zombie.announce();
}
	
