# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/31 00:43:52 by gguiulfo          #+#    #+#              #
#    Updated: 2017/02/01 17:02:10 by drosa-ta         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = ft_get_arr.c ft_putarr.c ft_open_file.c ft_ch_to_int.c ft_algorithm.c ft_key_len.c ft_error_handling.c
OBJ = *.o
LIB = libbsq.a

all: $(NAME)

$(NAME): mklib exec

exec:
	@gcc -Wall -Wextra -Werror libft.a $(LIB) main.c -o $(NAME)

mklib:
	@gcc -c $(SRC)
	@ar rc $(LIB) $(OBJ)
	@ranlib $(LIB)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
