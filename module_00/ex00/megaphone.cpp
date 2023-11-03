/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: cter-maa <cter-maa@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/24 13:31:26 by cter-maa      #+#    #+#                 */
/*   Updated: 2023/10/24 14:34:17 by cter-maa      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int i = 1;
	while (argv[i])
	{
		int j = 0;
		while(argv[i][j])
		{
			argv[i][j] = std::toupper(argv[i][j]);
			j++;
		}
		std::cout << argv[i] << ' ';
		i++;
	}
	std::cout << std::endl;
	return 0;
}