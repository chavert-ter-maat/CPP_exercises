/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 10:28:50 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/02 11:15:23 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void);
	
	private:
		std::string _name;	
};
	Zombie	*zombieHorde(int N, std::string name);