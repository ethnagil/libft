# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egillesp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/26 11:04:32 by egillesp          #+#    #+#              #
#    Updated: 2020/12/01 17:30:02 by egillesp         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRCS = ft_atoi.c ft_isprint.c ft_memset.c	ft_strdup.c	ft_strnstr.c \
	ft_bzero.c	ft_itoa.c	ft_putchar_fd.c	ft_strjoin.c	ft_strrchr.c \
	ft_calloc.c	ft_memccpy.c	ft_putendl_fd.c	ft_strlcat.c	ft_strtrim.c \
	ft_isalnum.c	ft_memchr.c	ft_putnbr_fd.c	ft_strlcpy.c	ft_substr.c \
	ft_isalpha.c	ft_memcmp.c	ft_putstr_fd.c	ft_strlen.c	ft_tolower.c \
	ft_isascii.c	ft_memcpy.c	ft_split.c	ft_strmapi.c	ft_toupper.c \
	ft_isdigit.c	ft_memmove.c	ft_strchr.c	ft_strncmp.c
OBJS = ${SRCS:.c=.o}

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
