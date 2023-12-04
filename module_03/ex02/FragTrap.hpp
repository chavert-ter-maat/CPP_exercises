/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/20 14:42:35 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/04 16:43:54 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

#define FRAG_HEALTH 100
#define FRAG_ENERGY 100
#define FRAG_ATTACK 30
#define FRAG_REPAIR 2

class FragTrap : public ClapTrap
{
	private:
	
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &other_obj);
		~FragTrap();

		void	attack(const std::string& target);
		void	highFivesGuys(void);
};
