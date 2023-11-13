# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: chaverttermaat <chaverttermaat@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/01 09:46:11 by chavertterm   #+#    #+#                  #
#    Updated: 2023/11/02 10:31:16 by chavertterm   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME	:= zombie

CC		:= c++
FLAGS	:= -Wall -Wextra -std=c++98 

SRC		:= $(wildcard *.cpp)
HEADER	:= $(wildcard *.hpp)

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