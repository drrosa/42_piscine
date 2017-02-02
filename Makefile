# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/31 00:43:52 by gguiulfo          #+#    #+#              #
#    Updated: 2017/02/01 23:40:17 by gguiulfo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = ft_get_arr.c ft_putarr.c ft_open_file.c ft_ch_to_int.c \
	  ft_algorithm.c ft_key_len.c ft_error_handling.c
OBJ = *.o
LIB = libbsq.a

all: $(NAME)

$(NAME):
	@gcc -c $(SRC)
	@ar rc $(LIB) $(OBJ)
	@ranlib $(LIB)
	@gcc -Wall -Wextra -Werror libft.a $(LIB) main.c -o $(NAME)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
