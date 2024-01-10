/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/21 09:05:47 by chavertterm   #+#    #+#                 */
/*   Updated: 2023/12/06 16:40:50 by cter-maa      ########   odam.nl         */
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
const Animal l  = Cat(); // should not leak
delete j;//should not create a leak
delete i;


Dog basic;
{
Dog tmp = basic;
}

std::cout << std::endl << std::endl;

return 0;
}