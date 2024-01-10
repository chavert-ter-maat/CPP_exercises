/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:14 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 16:25:53 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	private:
		std::string _type;

	public:
		Dog();
		Dog(const std::string name);
		Dog(const Dog &other_class);
		Dog &operator=(const Dog& other_class);
		~Dog();

		void makeSound() const;
};

#endif