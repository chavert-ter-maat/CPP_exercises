/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 11:37:31 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/03 14:48:06 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

		Weapon::Weapon(void){
		}
		
		Weapon::~Weapon(void){
		}
		
		Weapon::Weapon(std::string type){
			this->_Weapon = type;
		}

		void Weapon::setType(std::string type){
			this->_Weapon = type;
		}
		
		const std::string& Weapon::getType(void){
			return (this->_Weapon);
		}