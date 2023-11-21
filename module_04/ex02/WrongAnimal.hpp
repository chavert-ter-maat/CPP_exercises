/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 12:59:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 15:29:25 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal // base class
{
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other_class);
		WrongAnimal &operator=(const WrongAnimal& other_class);
		virtual ~WrongAnimal();
		
		const std::string &getType() const;
		virtual void makeSound() const;
};

#endif
