/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/15 12:24:56 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/02/28 13:24:38 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc < 3 || argc > 3000){
		std::cerr << "Error: Wrong input" << std::endl;
		exit(EXIT_FAILURE);
	}
	PmergeMe merge;
	merge.inputParsing(argv);
	merge.startMergeVec();
	merge.startMergeDeq();
	return 0;
}