/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:16:08 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 16:37:33 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const std::string name);
		Cat(const Cat &oobj);
		Cat &operator=(const Cat& obj);
		~Cat();

		void makeSound() const;
};

#endif