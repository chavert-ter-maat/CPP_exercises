/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 15:33:06 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/12 17:02:09 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void){
	Base* ptr;
	
	ptr = Base::generate();
	Base::identify(ptr);
	Base::identify(*ptr);
	delete (ptr);
	return (0);
}