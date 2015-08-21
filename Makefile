# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hhismans <hhismans@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/20 01:01:15 by hhismans          #+#    #+#              #
#    Updated: 2015/08/20 19:54:19 by hhismans         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = malloc

SRC = src/main.c\

DEL = rm -f

OBJ = $(SRC:.c=.o)

FLAG = -Wall -Werror -Wextra

LIB = -lft -L./libft/ -I./libft -I./includes

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@gcc -o $(NAME) $(FLAG) $(OBJ) $(LIB)
	@echo
	@echo "make -> $@ created"
	@echo

%.o: %.c
	@gcc -o $@ -c $< $(LIB)
	@echo [36mCompilation of[1m $< [0m[32m done [37m
clean:
	@make clean -C libft
	@$(DEL) $(OBJ)
	@echo
	@echo "clean -> .o deleted"
	@echo

fclean: clean
	@make fclean -C libft
	@$(DEL) $(NAME)
	@echo
	@echo "fclean -> ... and $(NAME) deleted"
	@echo

re: fclean all
	@make fclean -C libft
	@echo
	@echo "re -> $(NAME) reloaded"
	@echo

.PHONY: all clean fclean re

