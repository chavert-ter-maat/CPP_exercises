/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:08 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 10:14:56 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
		public:
		Cat();
		Cat(const Cat &other_class);
		Cat &operator=(const Cat& other_class);
		~Cat();

		void makeSound() const;
};

#endif