/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/12 12:25:02 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/01/12 15:22:11 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void){
	Data 		*structure;
	Data 		*copy_structure;
	uintptr_t	ptr;
	
	structure = new Data;
	structure->nb = 1;
	structure->character = 'a';
	
	ptr = Serializer::serialize(structure);
	copy_structure = Serializer::deserialize(ptr);
	if (copy_structure == structure)
	{
		std::cout << "Program works" << std::endl;
		std::cout << "copy_structure->nb = " <<copy_structure->character << std::endl;
		std::cout << "copy_structure->character = " << copy_structure->nb << std::endl;
	}
	else
		std::cout << "Program doesn't work" << std::endl;
	delete(structure);
	return (0);
}