# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    test.sh                                            :+:    :+:             #
#                                                      +:+                     #
#    By: chaverttermaat <chaverttermaat@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2024/01/12 11:46:40 by chavertterm   #+#    #+#                  #
#    Updated: 2024/01/12 12:13:31 by chavertterm   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

echo "running bash script test.sh"
echo \

make re
echo \ && echo \

echo "Input char: a"
./convert a
echo \ && echo \


echo "Input int: 1"
./convert 1
echo \ && echo \


echo "Input pseudo float: -inff"
./convert -inff
echo \ && echo \


echo "Input pseudo double: -inf"
./convert -inf
echo \ && echo \


echo "Edge case testing"

echo "Input string: aa"
./convert aa
echo \ && echo \


echo "Input overflow: 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111"
./convert 111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

make fclean