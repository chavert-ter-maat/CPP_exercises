# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: chaverttermaat <chaverttermaat@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/02 12:58:56 by chavertterm   #+#    #+#                  #
#    Updated: 2023/11/02 13:05:28 by chavertterm   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= brain

CC		:= c++
FLAGS	:= -Wall -Wextra -std=c++98 

SRC		:= $(wildcard *.cpp)
HEADER	:= $(wildcard *.hpp)

OBJ		:= $(SRC:.cpp=.o)

all: $(NAME)

run: all
	$(NAME)

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