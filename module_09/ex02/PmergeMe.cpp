/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/04/29 16:44:21 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <set>

// Canocical Orthodox
PmergeMe::PmergeMe(){
};

PmergeMe::PmergeMe(const PmergeMe& obj){
	*this = obj;
};

PmergeMe& PmergeMe::operator=(const PmergeMe &obj){
	if (this != &obj){
		this->_list.clear();
        std::copy(obj._list.begin(), obj._list.end(), std::back_inserter(this->_list));
		this->_deq = std::deque<int>(obj._deq.begin(), obj._deq.end());
	}
	return *this;
}

PmergeMe::~PmergeMe(){
};


// Member functions
template <typename T>
void	printArr(T arr){
	for (int i = 0; arr[i]; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

template <typename T>
void PmergeMe::merging(T& container, int const left, int const mid, int const right) {
    T leftList(container.begin(), std::next(container.begin(), mid - left + 1));
    T rightList(std::next(container.begin(), mid + 1), std::next(container.begin(), right + 1));

    auto leftIter = leftList.begin();
    auto rightIter = rightList.begin();
    auto containerIter = std::next(container.begin(), left);

    while (leftIter != leftList.end() && rightIter != rightList.end()) {
        if (*leftIter <= *rightIter) {
            *containerIter = *leftIter;
            ++leftIter;
        } else {
            *containerIter = *rightIter;
            ++rightIter;
        }
        ++containerIter;
    }

    while (leftIter != leftList.end()) {
        *containerIter = *leftIter;
        ++leftIter;
        ++containerIter;
    }

    while (rightIter != rightList.end()) {
        *containerIter = *rightIter;
        ++rightIter;
        ++containerIter;
    }
}

template <typename T>
void PmergeMe::mergeSort(T& container, int const begin, int const end) {
    if (begin >= end)
        return;

    int mid = begin + std::distance(container.begin(), std::next(container.begin(), end - begin)) / 2;

    mergeSort(container, begin, mid);
    mergeSort(container, mid + 1, end);
    merging(container, begin, mid, end);
}
void	PmergeMe::startMergeVec(){
	std::cout << "Before: ";
	printContainer(this->_list);
	auto start = std::chrono::high_resolution_clock::now();
	this->_elementsVec = this->_list.size();
	mergeSort(this->_list, 0, this->_elementsVec - 1);
	auto stop = std::chrono::high_resolution_clock::now();
	this->_deltaTimeVec = std::chrono::duration<double>(stop - start).count();
}

void	PmergeMe::startMergeDeq(){
	auto start = std::chrono::high_resolution_clock::now();
	this->_elementsDeq = this->_deq.size();
	mergeSort(this->_deq, 0, this->_elementsDeq - 1);
	auto stop = std::chrono::high_resolution_clock::now();
	this->_deltaTimeDeq = std::chrono::duration<double>(stop - start).count();
	std::cout << "After: ";
	printContainer(this->_deq);
	std::cout << "Time to process a range of " << this->_elementsVec << " elements with std::vector:" << _deltaTimeVec << " seconds" <<std::endl;
	std::cout << "Time to process a range of " << this->_elementsDeq << " elements with std::deque:" << _deltaTimeDeq << " seconds" <<std::endl;

}

template <typename T>
void PmergeMe::checkDoubles(const T& container) {
    std::set<int> uniqueElements;
    for (const auto& element : container) {
        if (!uniqueElements.insert(element).second) {
            std::cerr << "Error: Double integer found" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
}

template <typename T>
void	PmergeMe::printContainer(T container){
	for (const auto& element : container){
		std::cout << element  << ' ';
	}
	std::cout << std::endl;
}

void	PmergeMe::inputParsing(char **argv){
	
	size_t i = 1;
	size_t j = 0;

	while (argv[i]){
		try{
			int	nb = std::stoi(argv[i]);
			if (nb < 0){
				std::cout << "Error: Negative integer found" << std::endl;
				exit(EXIT_FAILURE);
			}
			_list.push_back(nb);
			_deq.push_back(nb);
		}
		catch (std::exception &e){
			std::cerr << e.what() << std::endl;
			exit(EXIT_FAILURE);
		}
		i++;
		j++;
	}
	checkDoubles(_list);
	checkDoubles(_deq);
	}

