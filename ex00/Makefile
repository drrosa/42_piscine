# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/23 12:18:38 by drosa-ta          #+#    #+#              #
#    Updated: 2017/01/23 19:39:22 by drosa-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c  srcs/ft_strcmp.c  srcs/ft_strlen.c  srcs/ft_swap.c
INCLUDES = includes
OBJS = ft_putchar.o ft_putstr.o  ft_strcmp.o  ft_strlen.o  ft_swap.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJS) 
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
