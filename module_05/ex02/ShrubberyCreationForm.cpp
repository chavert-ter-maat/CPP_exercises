/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/05 11:14:22 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/12/05 11:16:18 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

/* ************************** Orthodox Canonical **************************** */
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", SHRUB_SIGN, SHRUB_EXEC),
	 _target("Default"){
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}
	
ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : AForm(name, 
	SHRUB_SIGN, SHRUB_EXEC), _target(name){
	std::cout << "ShrubberyCreationForm constructor is called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) 
	: AForm(obj.getName(), SHRUB_SIGN, SHRUB_EXEC){
	*this = obj;
	std::cout << "ShrubberyCreationForm copy constructor is called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj){
	if (this != &obj){
		this->_target = obj._target;
	}
	std::cout<< "ShrubberyCreationForm assignment overload is called" << std::endl;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm deconstructor called" << std::endl;
}

/* *************************** Member functions ***************************** */

const char *ShrubberyCreationForm::notCreated::what() const throw(){
	return ("Unable to create file.");
}

const char *ShrubberyCreationForm::notOpened::what() const throw(){
	return ("Unable to open file.");
}
void   ShrubberyCreationForm::execute(Bureaucrat const & executor){
	std::string line;
	std::string filename = _target + "_shrubbery.txt";

	try{
		this->beSigned(executor);

		std::ofstream outfile(filename.c_str());
		if (!outfile.is_open())
			throw notCreated();
		std::ifstream infile("tree.txt");
		if (!infile.is_open())
			throw notOpened();

		while(std::getline(infile, line)){
			outfile << line << std::endl;
		}
		outfile.close();
		infile.close();
	}
	catch(const std::exception& e){
		std::cout << "here\n";
		std::cerr << e.what() << std::endl;
	}
 }