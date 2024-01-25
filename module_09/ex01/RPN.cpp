/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RPN.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/25 16:02:31 by chavertterm   ########   odam.nl         */
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
			return (nb1 / nb2);
		}
		case '*':{
			return (nb1 * nb2);
		}
		default:{
			throw std::string("Error");
			exit(EXIT_FAILURE);
		}
	}
}


void	printStack(std::stack<int> stack){
	while(!stack.empty()){
		std::cout << stack.top() << ' ';
		stack.pop();
	}
	std::cout << std::endl;
}

void	RPN::rpn(std::string str){
	std::stack<int> stack;
	for (uint i = 0; i < str.length();i++){
		while(isspace(str[i]) == true)
			i++;
		char c = str[i];
		if (c >= '0' && c <= '9'){
			int nb = c - '0';
			stack.push(nb);
		}
		else if (stack.size() >= 2){
			int nb1 = stack.top();
			stack.pop();
			int nb2 = stack.top();
			stack.pop();
			stack.push(excecuteOperator(str[i], nb1, nb2));
		}
		else
			throw std::string("Error");
	}
	std::cout << stack.top() << std::endl;
	// throw std::string("Error");
}
