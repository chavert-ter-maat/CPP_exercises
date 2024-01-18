/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/18 18:59:28 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

const char *NotFoundException::what() const throw(){
	return ("Int not found");
};

int main(void){
    std::vector<int> myVector = {10, 20, 30};
    try {
        std::vector<int>::iterator it = easyfind(myVector, 20);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	try {
        std::vector<int>::iterator it = easyfind(myVector, 11);
        std::cout << "Found: " << *it << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}