/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 12:59:22 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 15:03:46 by cter-maa      ########   odam.nl         */
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
		WrongAnimal(const std::string _type);
		WrongAnimal(const WrongAnimal &other_class);
		WrongAnimal &operator=(const WrongAnimal& other_class);
		virtual ~WrongAnimal();
		
		const std::string &getType() const;
		void makeSound() const;
};
#endif
