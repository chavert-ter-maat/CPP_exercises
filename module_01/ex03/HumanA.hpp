/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 11:03:30 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/03 14:50:21 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"

class HumanA{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		void attack(void);
		
	private:
		Weapon &_weapon;
		std::string _name;
};
#endif
