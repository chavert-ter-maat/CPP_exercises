# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cter-maa <cter-maa@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/08 09:58:04 by cter-maa      #+#    #+#                  #
#    Updated: 2023/11/09 15:34:47 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= Harl

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