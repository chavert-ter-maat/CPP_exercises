/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PmergeMe.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: chaverttermaat <chaverttermaat@student.      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/19 11:06:46 by chavertterm   #+#    #+#                 */
/*   Updated: 2024/02/28 13:30:03 by chavertterm   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template void PmergeMe::merging(std::vector<int>&, int, int, int);
template void PmergeMe::mergeSort(std::vector<int>&, int, int);

// Canocical Orthodox
PmergeMe::PmergeMe(){
};

PmergeMe::PmergeMe(const PmergeMe& obj){
	*this = obj;
};

PmergeMe& PmergeMe::operator=(const PmergeMe &obj){
	if (this != &obj){
		for(size_t i = 0; _vec[i]; i++){
			this->_vec[i] = obj._vec[i];
		}
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
    int const subArrOne = mid - left + 1;
    int const subArrTwo = right - mid;

    auto *leftArr = new int[subArrOne];
    auto *rightArr = new int[subArrTwo];

    for (int i = 0; i < subArrOne; i++)
        leftArr[i] = container[left + i];
    for (int i = 0; i < subArrTwo; i++)
        rightArr[i] = container[mid + 1 + i];

    auto indexSubArrOne = 0;
    auto indexSubArrTwo = 0;
    int indexContainer = left;

    while (indexSubArrOne < subArrOne && indexSubArrTwo < subArrTwo) 
	{
        if (leftArr[indexSubArrOne] <= rightArr[indexSubArrTwo]) 
		{
            container[indexContainer] = leftArr[indexSubArrOne];
            indexSubArrOne++;
        } 
		else
		{
            container[indexContainer] = rightArr[indexSubArrTwo];
            indexSubArrTwo++;
        }
        indexContainer++;
    }

    while (indexSubArrOne < subArrOne) 
	{
        container[indexContainer] = leftArr[indexSubArrOne];
        indexSubArrOne++;
        indexContainer++;
    }

    while (indexSubArrTwo < subArrTwo) 
	{
        container[indexContainer] = rightArr[indexSubArrTwo];
        indexSubArrTwo++;
        indexContainer++;
    }
    delete[] leftArr;
    delete[] rightArr;
}

template <typename T>
void	PmergeMe::mergeSort(T& container, int const begin, int const end)
{
	if (begin >= end)
		return ;
	int mid = begin + (end - begin) / 2;
	mergeSort(container, begin, mid);
	mergeSort(container, mid + 1, end);
	merging(container, begin, mid, end);

}
void	PmergeMe::startMergeVec(){
	std::cout << "Before: ";
	printContainer(this->_vec);
	auto start = std::chrono::high_resolution_clock::now();
	this->_elementsVec = this->_vec.size();
	mergeSort(this->_vec, 0, this->_elementsVec - 1);
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
void	PmergeMe::checkDoubles(const T container){
	size_t j = 0;
	size_t i = 0;

	while(container[i]){
		j = i;
		if (container[i + 1])
			while(container[j]){
				if (container[i] == container[j + 1]){
					std::cerr << "Error: Double integer found" << std::endl;
					exit(EXIT_FAILURE);
				}
				j++;
			}
		i++;
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
			_vec.push_back(nb);
			_deq.push_back(nb);
		}
		catch (std::exception &e){
			std::cerr << e.what() << std::endl;
			exit(EXIT_FAILURE);
		}
		i++;
		j++;
	}
	checkDoubles(_vec);
	checkDoubles(_deq);
	}

