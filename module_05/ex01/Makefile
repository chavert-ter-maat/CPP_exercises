# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cter-maa <cter-maa@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/21 09:05:30 by chavertterm   #+#    #+#                  #
#    Updated: 2024/03/11 16:09:18 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= form

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++11

SRC		:= $(wildcard *.cpp)

OBJ_DIR = obj

OBJ		:= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

${OBJ_DIR}:
	@mkdir -p ${OBJ_DIR}
				
run: all
	./$(NAME)

$(OBJ): $(OBJ_DIR)/%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $^ -o $(NAME)

clean:
	@$(RM) -rf $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: clean all fclean re

# .DEFAULT_GOAL:=run