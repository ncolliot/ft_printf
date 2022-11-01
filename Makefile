# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolliot <ncolliot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/01 23:45:03 by ncolliot          #+#    #+#              #
#    Updated: 2022/11/02 00:19:13 by ncolliot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a
SRCS = ft_flag.c ft_fonctions.c ft_hex.c ft_printf.c
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}
COMP = gcc
INCLUDE = ft_printf.c

.c.o:
	${COMP} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all