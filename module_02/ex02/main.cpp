/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/13 16:32:24 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/04 14:32:42 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    std::cout << "subject tests:\n" << std::endl;
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
	
    std::cout << "\nmy own tests:\n" << std::endl;
    Fixed c(5);
    Fixed d(2.5f);
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    Fixed e = c;
    std::cout << "e = c gives e = " << e << std::endl;
    std::cout << c << " > " << d << " gives " << (c > d) << "(true)" << std::endl;
    std::cout << c << " < " << d << " gives " << (c < d) << "(false)" << std::endl;
    std::cout << c << " >= " << e << " gives " << (c >= e) << "(true)" << std::endl;
    std::cout << c << " <= " << d << " gives " << (c <= d) << "(false)" << std::endl;
    std::cout << c << " == " << e << " gives " << (c == e) << "(true)" << std::endl;
    std::cout << c << " != " << e << " gives " << (c != e) << "(false)" << std::endl;
    std::cout << c << " + " << d << " = " << (c + d) << std::endl;
    std::cout << c << " - " << d << " = " << (c - d) << std::endl;
    std::cout << c << " * " << e << " = " << (c * e) << std::endl;
    std::cout << c << " / " << d << " = " << (c / d) << std::endl;
    std::cout << "c: " << c << ". c++: " << c++ << ". c: " << c << ". ++c: " << ++c << "." << std::endl;
    std::cout << "e: " << e << ". e--: " << e-- << ". e: " << e << ". --e: " << --e << "." << std::endl;
    std::cout << "min (" << c << ", " << d << ") == " << Fixed::min(c, d) << std::endl;
    std::cout << "max (" << c << ", " << d << ") == " << Fixed::max(c, d) << std::endl;
    return 0;
}
