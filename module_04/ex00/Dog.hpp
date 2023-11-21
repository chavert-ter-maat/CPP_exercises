/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:14 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 11:29:39 by chavertterm   ########   odam.nl         */
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
		Dog(const Dog &other_class);
		Dog &operator=(const Dog& other_class);
		~Dog();

		void makeSound() const;
};

#endif