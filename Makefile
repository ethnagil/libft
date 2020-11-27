# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egillesp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/26 11:04:32 by egillesp          #+#    #+#              #
#    Updated: 2020/11/26 11:29:45 by egillesp         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRCS = $(wildcard *.c)
OBJS = ${SRCS:.c=*.o}

HD = libft.h
RM = rm -f

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o $(<:.c=.o)

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: make all clean fclean re libft.a
