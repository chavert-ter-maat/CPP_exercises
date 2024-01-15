/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/15 15:57:37 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void	increment_int(int &a)
{
	a += 1;
}

void	add(std::string &str)
{
	str += '!';
}

int main( void ) {
	int int_array[5] = {1, 2, 3, 4, 5};
	 std::string str_arr[4] = {"hallo", "everyone", "test", "123"};
	Iter(int_array, 5, increment_int);
	print(int_array, 5);
	Iter(str_arr, 4, add);
	print(str_arr, 4);
	return 0;
}
