# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddiniz <ddiniz@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 15:43:59 by ddiniz            #+#    #+#              #
#    Updated: 2022/05/18 17:32:02 by ddiniz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

all: $(NAME)

$(NAME):
	ar rc

%.o: %.c %.h

.PHONY clean fclean re
clean:

fclean: clean

re:

