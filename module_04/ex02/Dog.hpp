/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:14 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 15:30:38 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal{
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