/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:08 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 11:30:04 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	private:
		std::string _type;

	public:
		Cat();
		Cat(const Cat &other_class);
		Cat &operator=(const Cat& other_class);
		~Cat();

		void makeSound() const;
};

#endif