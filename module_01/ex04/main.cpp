/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/08 09:58:42 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/11/09 14:26:01 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "expected input: <./file> <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	std::string outfile_name(argv[1]);
	outfile_name += ".replace";
	std::string	search_word(argv[2]);
	std::string	replace_word(argv[3]);
	if (search_word.empty())
	{
		std::cerr << "no input <string1>" << std::endl;
		return 1;
	}
 	std::ifstream infile(argv[1]);
    if (!infile.is_open()) 
	{
        std::cerr << "unable to open file: " << std::endl;
        return 1;
	}
	std::ofstream outfile(outfile_name.c_str());
    if (!outfile.is_open()) 
	{
        std::cerr << "unable to create file" << std::endl;
        return 1;
    }
	std::string line;
	while(std::getline(infile, line))
	{
		size_t pos = line.find(search_word);
		while(pos != std::string::npos)
		{
			line = line.substr(0, pos) + replace_word + line.substr(pos + search_word.length());
			pos = line.find(search_word, pos + replace_word.length());
		}
		outfile << line << std::endl;
		if (infile.eof())
			break ;
	}
	infile.close();
	outfile.close();
    return 0;
}