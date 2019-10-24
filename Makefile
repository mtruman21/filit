# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kzina <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/30 12:09:39 by kzina             #+#    #+#              #
#    Updated: 2019/05/31 15:12:31 by kzina            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= fillit

LIB_DIR	:= ./libft

SRC		:= main.c \
		   reader.c \
		   solver.c \
		   map.c \
		   tetrimino.c
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
LIBA	:= $(LIB_DIR)/libft.a

all: $(NAME)

$(NAME): $(LIBA)
	$(CC) $(CFLAGS) $(SRC) $(LIBA) -o $(NAME)

$(LIBA):
	make -C./libft

clean: 
	make clean -C./libft

fclean: clean
	rm -rf $(NAME)
	make fclean -C./libft

re:
	@$(MAKE) fclean
	@$(MAKE) all

