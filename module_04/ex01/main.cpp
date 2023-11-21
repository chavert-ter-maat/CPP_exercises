/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:05:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/11/21 14:06:34 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;

Animal *animal[100];

for (int i = 0; i < 50; i++)
	animal[i] = new Cat();
for (int i = 50; i < 100; i++)
	animal[i] = new Dog();
for (int i = 0; i < 100; i++)
	delete animal[i];

return 0;
}