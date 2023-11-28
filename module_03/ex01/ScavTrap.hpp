/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:35 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/20 16:12:14 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define	SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define ST_HEALTH 100;
#define ST_ENERGY 50;
#define ST_DAMAGE 20;

class ScavTrap : public ClapTrap
{
	private:
	bool	_guardgate;
	
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &other_obj);
		~ScavTrap();

		void	guardgate();
};

#endif