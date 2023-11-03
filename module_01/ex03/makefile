# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cter-maa <cter-maa@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/02 12:58:56 by chavertterm   #+#    #+#                  #
#    Updated: 2023/11/03 10:53:51 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= human

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