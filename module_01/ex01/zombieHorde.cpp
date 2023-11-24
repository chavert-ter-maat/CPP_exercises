/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   zombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 10:59:07 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/24 13:49:11 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){
	Zombie *horde = new Zombie[N];
	Zombie tmp(name);
	
	
	for (int i = 0; i < N; i++)
		horde[i] = tmp;
	return (horde);
}