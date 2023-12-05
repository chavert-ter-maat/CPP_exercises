/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:08 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 16:24:12 by cter-maa      ########   odam.nl         */
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
		Cat(const std::string name);
		Cat(const Cat &other_class);
		Cat &operator=(const Cat& other_class);
		~Cat();

		void makeSound() const;
};

#endif