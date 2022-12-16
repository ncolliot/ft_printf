# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:45:03 by ncolliot          #+#    #+#              #
#    Updated: 2022/12/16 16:14:25 by ncolliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS =-Wall -Wextra -Werror

SRC= 	ft_flag.c ft_fonctions.c ft_printf.c ft_spec.c count_nbr.c


OBJ= 	ft_flag.o ft_fonctions.o ft_printf.o ft_spec.o count_nbr.o

.PHONY = all clean fclean re

all:$(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):$(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re:fclean all
