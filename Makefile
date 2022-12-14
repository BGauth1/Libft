# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pasyrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 20:09:09 by pasyrot           #+#    #+#              #
#    Updated: 2022/10/12 18:09:01 by gbertet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c \
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

SRCBONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c \

ifdef BONUS
	SRC += SRCBONUS
endif

OBJ = $(notdir $(SRC:.c=.o))

OBJBONUS = $(notdir $(SRCBONUS:.c=.o))

CFLAGS = -Werror -Wall -Wextra -g
CC = gcc
all : $(NAME)

$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)

bonus : $(OBJBONUS)
	ar -rc $(NAME) $(OBJBONUS)

%.o : %.c
	$(CC) -c $(FLAGS) -o $@ $^

clean :
	rm -rf $(OBJ) $(OBJBONUS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

so:
	$(CC) -nostartfiles -fPIC $(FLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

.PHONY: all clean fclean re
