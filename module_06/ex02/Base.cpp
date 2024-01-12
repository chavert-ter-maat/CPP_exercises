/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Base.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 15:51:18 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/12 17:08:35 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <string>

Base::~Base(){
	std::cout << "Base deconstructor called" << std::endl;
}

Base* Base::generate(void){
	std::srand(time(0));
	int nb = (std::rand() % 3);
	if (nb == 0){
		std::cout << "A created" << std::endl;
		return (new A);
	}
	if (nb == 1){
		std::cout << "B created" << std::endl;
		return (new B);
	}
	else{
		std::cout << "C created" << std::endl;
		return (new C);
	}
}

void	Base::identify(Base* p){
	A *a;
	B *b;
	C *c;

	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a != nullptr)
		std::cout << "The type of object pointen by p is A" << std::endl;
	if (b != nullptr)
		std::cout << "The type of object pointen by p is B" << std::endl;
	if (c != nullptr)
		std::cout << "The type of object pointen by p is C" << std::endl;	
}

void	Base::identify(Base& p){
	std::cout << std::endl;
	try{
		A a;
		a = dynamic_cast<A&>(p);
		std::cout << std::endl <<"The type of object pointen by p is A" << std::endl;
		return ;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << " Meaning this isn't the object pointed at" << std::endl;
	}
	try{
		B b;
		b = dynamic_cast<B&>(p);
		std::cout << std::endl <<"The type of object pointen by p is B" << std::endl;
		return ;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << " Meaning this isn't the object pointed at" << std::endl;
	}
	try{
		C c;
		c = dynamic_cast<C&>(p);
		std::cout << std::endl <<"The type of object pointen by p is C" << std::endl;
		return ;
	}
	catch(const std::exception &e){
		std::cerr << e.what() << " Meaning this isn't the object pointed at" << std::endl;
	}
}