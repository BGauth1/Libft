# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pasyrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 20:09:09 by pasyrot           #+#    #+#              #
#    Updated: 2022/10/05 02:19:16 by gbertet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DOTC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_bzero.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_atoi.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_lstnew.c

DOTO = $(notdir $(DOTC:.c=.o))

FLAGS = -Werror -Wall -Wextra -g
CC = gcc
all : $(NAME)

$(NAME) : $(DOTO)
	ar -rc $(NAME) $(DOTO)

%.o : %.c
	$(CC) -c $(FLAGS) -o $@ $^

clean :
	/bin/rm $(DOTO)

fclean : clean
	/bin/rm $(NAME)

re : fclean all

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(DOTC)
	gcc -nostartfiles -shared -o libft.so $(DOTO)
.PHONY: all clean fclean re
