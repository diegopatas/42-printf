# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 18:08:16 by ddiniz            #+#    #+#              #
#    Updated: 2022/06/08 19:20:04 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	gcc -g -Wall -Wextra -Werror main.c -I../includes -I../libft -L../ -lftprintf
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s ./a.out
