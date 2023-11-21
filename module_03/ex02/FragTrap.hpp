/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:35 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 08:42:33 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define FT_HEALTH 100
#define FT_ENERGY 50
#define FT_DAMAGE 20

class FragTrap : public ClapTrap
{
	private:
	
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &other_obj);
		~FragTrap();

		void	highFivesGuys(void);
};
