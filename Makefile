# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/30 17:32:02 by ddiniz            #+#    #+#              #
#    Updated: 2022/05/30 18:49:26 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

FILES		= main.c ft_printf.c
SRC			= ./src
INCLUDES	= ./includes
LIBFT		= libft.a
NAME		= libftprintf.a

all: $(LIBFT)
	$(CC) $(CFLAGS) -I$(INCLUDES) ./test/main.c ./src/ft_printf.c -L./libft -lft

$(LIBFT):
	make -C ./libft

clean:

fclean:

re:

.PHONY: all fclean clean re
