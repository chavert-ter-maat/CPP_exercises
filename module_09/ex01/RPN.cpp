/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/05/17 09:46:43 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// Canocical Orthodox
RPN::RPN(){
};

RPN::RPN(const RPN& obj){
	*this = obj;
};

RPN& RPN::operator=(const RPN &obj){
	if (this != &obj){
	*this = obj;
	}
    return *this;
}

RPN::~RPN(){
};

// Member functions
int	excecuteOperator(char c, int nb1, int nb2){
	switch (c)
	{
		case '+':{
			return (nb1 + nb2);
		}
		case '-':{
			return (nb2 - nb1);
		}
		case '/':{
			if (nb1 == 0 || nb2 == 0){
			std::cout << "Error: devision by 0" << std::endl;
			exit(EXIT_FAILURE);
			}
			return (nb2 / nb1);
		}
		case '*':{
			return (nb1 * nb2);
		}
		default:{
			std::cout << "Error: invalid operator or number" << std::endl;
			exit(EXIT_FAILURE);
		}
	}
}

void RPN::rpn(std::string str) {
	std::stack<int> stack;
	for (uint i = 0; i < str.length(); i++) {
		while (str[i] == ' ')
			i++;
		char c = str[i];
		if ( str[i] == '.' ||  str[i] == ','){
			std::cout << "Error: no floats allowed" << std::endl;
			exit(EXIT_FAILURE);
		}
		if (str[i] == '-' && (str[i + 1] >= '0' && str[i + 1] <= '9')) {
			std::cout << "Error: no input < 0 allowed" << std::endl;
			exit(EXIT_FAILURE);
		}
		if (c >= '0' && c <= '9') {
			int nb = (c - '0');
			stack.push(nb);
		} else if (stack.size() >= 2) {
			int nb1 = stack.top();
			stack.pop();
			int nb2 = stack.top();
			stack.pop();
			stack.push(excecuteOperator(str[i], nb1, nb2));
		}
		else if (c != ' ' && c != '\0')
			throw std::string("Error: not enough numbers");
	}
	std::cout << stack.top() << std::endl;
}
