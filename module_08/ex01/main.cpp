/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/19 15:14:42 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <vector>

int main() {
try{
    Span sp = Span(10);
    
    sp.addNumber(-10);
    sp.addNumber(-11);
    sp.addNumber(20);
    sp.addNumber(-113);
    sp.addNumber(15);
    sp.addNumber(2147483647);
    sp.addNumber(-2147483648);
    
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    sp.addRange();
    sp.print();
    // addNumber() to overflow vector
    // sp.addNumber(11); 
    }
    catch(const char *Exception){
        std::cout << Exception << std::endl;
    }
    return 0; 
}
