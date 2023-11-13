/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/01 14:10:11 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/01 14:44:04 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// It creates a zombie, name it, and the zombie announces itself.
Zombie	*newZombie(std::string name){
	return (new Zombie(name));
}