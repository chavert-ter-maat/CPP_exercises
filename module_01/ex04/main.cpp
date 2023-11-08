/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 09:58:42 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/08 15:51:17 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceLine(std::string &line, std::string s1, std::string s2)
{
	
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "expected input: <./file> <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	
	std::string outfile_name(argv[1]);
	outfile_name += ".replace";
	std::string	s1(argv[2]);
	std::string	s2(argv[3]);
	
	if (s1.empty())
	{
		std::cerr << "no input <string1>" << std::endl;
		return 1;
	}
 	std::ifstream infile(argv[1]);
    if (!infile.is_open()) {
        std::cerr << "unable to open file: " << std::endl;
        return 1;
	}
	std::ofstream outfile(outfile_name.c_str());
    if (!outfile.is_open()) 
	{
        std::cerr << "unable to create file: " << std::endl;
        return 1;
    }
	
	std::string	line;
	while(std::getline(infile, line))
	{
		replaceLine(line, s1, s2);
		outfile << line << std::endl;
	}
	
	outfile.close();
	infile.close();
    return 0;
}