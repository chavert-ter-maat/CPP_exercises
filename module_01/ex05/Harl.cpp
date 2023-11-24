/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Harl.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/24 13:51:52 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/24 14:15:25 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level )
{
	int counter = 5;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_func array[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
			counter = i;
	}

	if (counter == 5)
	{
		std::cout << "wrong input" << std::endl;
		std::cout << "expected input ./Harl <DEBUG/INFO/WARNING/ERROR>" << std::endl;
		std::exit(1);
	}

	(this->*array[counter])();
}

void	Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
