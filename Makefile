# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cvan-oot <cvan-oot@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 18:32:23 by cvan-oot          #+#    #+#              #
#    Updated: 2022/11/16 14:42:09 by cvan-oot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c \
ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar.c \
ft_putstr.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strchr.c \
ft_substr.c \
ft_swap.c \
ft_tolower.c \
ft_toupper.c \
ft_strjoin.c \
ft_strtrim.c \
ft_itoa.c \
ft_strmapi.c \
ft_striteri.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c

OBJS = ${SRCS:.c=.o}

HEADERS = includes/

.c.o:
	gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}

all: ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
