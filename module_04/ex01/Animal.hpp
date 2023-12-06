/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:05:51 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 11:13:57 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal // base class
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal &other_class);
		Animal &operator=(const Animal& other_class);
		virtual ~Animal();
		
		const std::string &getType() const;
		virtual void makeSound() const;
};

#endif