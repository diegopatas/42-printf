# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 17:32:02 by ddiniz            #+#    #+#              #
#    Updated: 2022/05/31 20:45:53 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

FILES		= ft_printf.c
OBJECTS		= $(FILES:%.c=%.o)

SRC			= ./src
TEST		= ./test

INCLUDES	= ./includes
LIBFT		= ./libft

NAME_LIBFT	= libft.a
NAME		= libftprintf.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJECTS)
	ar rc $(NAME) $(SRC)/*.o $(LIBFT)/*.o

$(LIBFT):
	@make -C $(LIBFT) re

$(OBJECTS): $(SRC)/$(FILES)
	$(CC) $(CFLAGS) -I$(INCLUDES) -I$(LIBFT) -c $< -o $(SRC)/$@

program: $(NAME)
	$(CC) $(CFLAGS) ./test/main.c -lftprintf -I$(INCLUDES) -I$(LIBFT) -L./

clean:
	rm -rf $(TEST)/*.o
	@make -C $(LIBFT) clean

fclean: clean
	rm -rf $(NAME)
	@make -C $(LIBFT) fclean

re: fclean all

.PHONY: all fclean clean re
