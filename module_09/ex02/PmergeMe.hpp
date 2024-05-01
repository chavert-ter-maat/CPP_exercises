/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/01 13:06:48 by cter-maa      #+#    #+#                 */
/*   Updated: 2024/05/01 13:06:49 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <chrono>

class PmergeMe{
	public:
	PmergeMe();
	PmergeMe(const PmergeMe& obj);
	PmergeMe& operator=(const PmergeMe& obj);
	~PmergeMe();

	void	inputParsing(char **argv);

	template <typename T>
	void	printContainer(T container);

	template <typename T>
	void	mergeSort(T& container, int const begin, int const end);

	template <typename T>
	void	merging(T& container, int const left, int const mid, int const right);

	template <typename T>
	void	checkDoubles(T container);

	void	startMergeVec();
	void	startMergeDeq();

	private:
	std::vector<int>	_vec;
	std::deque<int>		_deq;
	int					_elementsVec;
	int					_elementsDeq;
	double				_deltaTimeVec;
	double				_deltaTimeDeq;
};


#endif