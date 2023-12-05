/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:05:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/05 16:04:26 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
j->makeSound();
i->makeSound(); //will output the cat sound!
meta->makeSound();

std::cout << std::endl;

const WrongAnimal* k = new WrongAnimal();
k->makeSound();

const WrongAnimal* l = new WrongCat("Tom");
l->makeSound();


delete meta;
delete j;
delete i;
delete k;
delete l;
return 0;
}