/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:05:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 11:17:05 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{	
	// AAnimal pietje; //should give compile error
	
	AAnimal *pukje = new Cat(); //should compile
	pukje->makeSound();
	delete pukje;

	std::cout << std::endl << std::endl;
	
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	
	
	Dog basic;
	{
	Dog tmp = basic;
	}
	
	std::cout << std::endl << std::endl;

	return 0;
}