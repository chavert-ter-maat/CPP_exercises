/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:05:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 09:32:54 by cter-maa      ########   odam.nl         */
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
std::cout << "j\t= \t" << j->getType() << " " << std::endl;
std::cout << "j\t= \t";
j->makeSound();
std::cout << "i\t= \t" << i->getType() << " " << std::endl;
std::cout << "i\t= \t";
i->makeSound(); //will output the cat sound!
std::cout << "meta\t= \t";
meta->makeSound();

std::cout << std::endl << std::endl;

const WrongAnimal* k = new WrongAnimal();
std::cout << "k\t= \t" << k->getType() << " " << std::endl;
std::cout << "k \t= \t";
k->makeSound();

const WrongAnimal* l = new WrongCat();
std::cout << "l\t= \t" << l->getType() << " " << std::endl;
std::cout << "l \t= \t";
l->makeSound();

const WrongCat m;
std::cout << "m\t= \t" << m.getType() << " " << std::endl;
std::cout << "m \t= \t";
m.makeSound();

delete meta;
delete j;
delete i;
delete k;
delete l;
return 0;
}