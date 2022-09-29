# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pasyrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 20:09:09 by pasyrot           #+#    #+#              #
#    Updated: 2022/09/27 16:42:10 by gbertet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DOTC = ft_isalpha.c / ft_isdigit.c / ft_isalnum.c / ft_isascii.c / ft_isprint.c / ft_strlen.c / ft_memset.c / ft_bzero.c / ft_memcpy.c / ft_toupper.c / ft_tolower.c / ft_strchr.c / ft_memmove.c / main.c

DOTO = $(notdir $(DOTC:.c=.o))

FLAGS = -Werror -Wall -Wextra -g

all : $(NAME)

$(NAME) : $(DOTO)
	gcc $(FLAGS) -o $(NAME) $(DOTO)

%.o : %.c
	gcc -c $(FLAGS) -o $@ $^

clean :
	/bin/rm $(DOTO)

fclean : clean
	/bin/rm $(NAME)

re : fclean all

.PHONY: all clean fclean re
