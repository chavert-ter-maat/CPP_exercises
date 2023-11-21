/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:35 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 08:42:00 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define ST_HEALTH 100
#define ST_ENERGY 50
#define ST_DAMAGE 20

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
