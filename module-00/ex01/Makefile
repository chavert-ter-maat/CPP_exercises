# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cter-maa <cter-maa@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/24 13:31:21 by cter-maa      #+#    #+#                  #
#    Updated: 2023/10/27 11:43:34 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= phonebook

CC		:= g++
FLAGS	:= -Wall -Wextra -std=c++98

SRC		:= $(wildcard *.cpp)

OBJ		:= $(SRC:.cpp=.o)

all: $(NAME)

run: all
	./$(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $^ -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: 
	@$(RM) $(NAME) $(OBJ)

re: fclean all

.PHONY: clean all fclean re