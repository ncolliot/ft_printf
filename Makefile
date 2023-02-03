# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolliot <ncolliot@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:45:03 by ncolliot          #+#    #+#              #
#    Updated: 2023/02/02 18:18:33 by ncolliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS =-Wall -Wextra -Werror

SRC= 	ft_flag.c ft_basic_fonctions.c ft_printf.c ft_spec.c count_len.c


OBJ= 	ft_flag.o ft_basic_fonctions.o ft_printf.o ft_spec.o count_len.o

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
