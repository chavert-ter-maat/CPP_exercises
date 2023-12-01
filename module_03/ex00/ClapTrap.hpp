/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/16 15:52:52 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/01 14:41:19 by cter-maa      ########   odam.nl         */
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
		
		ClapTrap	&operator=(const ClapTrap &other_obj);  
		
		bool 	CanDoAction();
		void	showInformation();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};