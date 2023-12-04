/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:35 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/04 16:43:34 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define SCAV_HEALTH 100
#define SCAV_ENERGY 50
#define SCAV_ATTACK 20
#define SCAV_REPAIR 2

class ScavTrap : public ClapTrap
{
	private:
	bool	_guardgate;
	
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &other_obj);
		~ScavTrap();
		
		void	attack(const std::string& target);
		void	guardgate();
};
