# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: chaverttermaat <chaverttermaat@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/13 16:29:35 by chavertterm   #+#    #+#                  #
#    Updated: 2023/11/21 08:44:51 by chavertterm   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= scavtrap

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98

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