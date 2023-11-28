/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Claptrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:52 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/20 13:33:01 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{	
	private:
	std::string	_name;
	int		_hitPoints;
	int		_energyPoints;
	int		_attackDamage;
	
	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(ClapTrap &other_obj);
		~ClapTrap();
		
		ClapTrap	&operator=(const ClapTrap &other_obj); //copy assignment operator
		
		bool 	CanDoAction();
		void	showInformation();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};