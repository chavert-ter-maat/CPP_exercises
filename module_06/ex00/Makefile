# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cter-maa <cter-maa@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/21 09:05:30 by chavertterm   #+#    #+#                  #
#    Updated: 2024/01/10 14:06:39 by chavertterm   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# File Name
NAME	:= convert

# Object Files
SRC		:= $(wildcard *.cpp)
OBJ_DIR := ./obj
OBJ     := $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

# Compiler and Flags
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98

# Debugging
ifdef DEBUG
	FLAGS += -g
endif

ifdef FSAN
	FLAGS += -fsanitize=address,undefined
endif

# Targets
all: $(NAME)

$(OBJ_DIR):
	mkdir -p $@

run: all
	./$(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $^ -o $(NAME)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean all fclean re

# .DEFAULT_GOAL:=run