# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 12:18:38 by drosa-ta          #+#    #+#              #
#    Updated: 2017/01/23 16:10:20 by drosa-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/*
INCLUDES = includes

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm ft_*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
