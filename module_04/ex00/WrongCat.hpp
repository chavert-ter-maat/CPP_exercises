/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 12:46:44 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 13:05:27 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		std::string	_type;
		
	public:
		WrongCat();
		WrongCat(const WrongCat &other_class);
		WrongCat &operator=(const WrongCat& other_class);
		~WrongCat();

		void makeSound() const;
};

#endif