# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pasyrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 20:09:09 by pasyrot           #+#    #+#              #
#    Updated: 2022/09/30 11:50:57 by gbertet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DOTC = ft_isalpha.c / ft_isdigit.c / ft_isalnum.c / ft_isascii.c / ft_isprint.c / ft_strlen.c / ft_memset.c / ft_memcpy.c / ft_memmove.c / ft_memchr.c / ft_memcmp.c / ft_bzero.c / ft_toupper.c / ft_tolower.c / ft_strchr.c / ft_strrchr.c / ft_atoi.c / ft_strlcat.c / ft_strlcpy.c / ft_strncmp.c / ft_strnstr.c / ft_calloc.c / ft_strdup.c / ft_substr.c

DOTO = $(notdir $(DOTC:.c=.o))

FLAGS = -Werror -Wall -Wextra -g

all : $(NAME)

$(NAME) : $(DOTO)
	ar -rc $(NAME) $(DOTO)

%.o : %.c
	gcc $(FLAGS) -o $@ $^

clean :
	/bin/rm $(DOTO)

fclean : clean
	/bin/rm $(NAME)

re : fclean all

.PHONY: all clean fclean re
