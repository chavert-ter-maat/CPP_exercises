# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cter-maa <cter-maa@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/21 09:05:30 by chavertterm   #+#    #+#                  #
<<<<<<< HEAD:module_06/ex00/Makefile
#    Updated: 2024/01/10 11:37:49 by chavertterm   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# File Name
NAME	:= convert
=======
#    Updated: 2023/12/06 11:38:01 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME	:= bureaucrat

CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++98
>>>>>>> 6367cb15f0cb915ba9909f49ba4de826df9ce58f:module_05/ex00/Makefile

# Object Files
SRC		:= $(wildcard *.cpp)
OBJ_DIR := ./obj
OBJ     := $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

<<<<<<< HEAD:module_06/ex00/Makefile
# Compiler and Flags
CC		:= c++
FLAGS	:= -Wall -Wextra -Werror -std=c++11

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
=======
OBJ_DIR = obj

OBJ		:= $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

${OBJ_DIR}:
	@mkdir -p ${OBJ_DIR}
				
run: all
	./$(NAME)

$(OBJ): $(OBJ_DIR)/%.o : %.cpp
>>>>>>> 6367cb15f0cb915ba9909f49ba4de826df9ce58f:module_05/ex00/Makefile
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $^ -o $(NAME)

clean:
<<<<<<< HEAD:module_06/ex00/Makefile
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)
=======
	@$(RM) -rf $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)
>>>>>>> 6367cb15f0cb915ba9909f49ba4de826df9ce58f:module_05/ex00/Makefile

re: fclean all

.PHONY: clean all fclean re

# .DEFAULT_GOAL:=run