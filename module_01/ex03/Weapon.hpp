/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 10:52:30 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/03 14:47:01 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>

class	Weapon{
	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		void setType(std::string type);
		const std::string &getType(void);
		
	private:
		std::string _Weapon;
};
#endif
