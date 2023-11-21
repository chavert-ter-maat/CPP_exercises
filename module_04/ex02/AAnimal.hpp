/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:05:51 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 15:36:25 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal // base class
{
	protected:
		std::string _type;

	protected:
		AAnimal();
		AAnimal(const AAnimal &other_class);

	public:		
		AAnimal &operator=(const AAnimal& other_class);
		virtual ~AAnimal();
		
		const std::string &getType() const;
		virtual void makeSound() const = 0; //pure virtual function
};

#endif