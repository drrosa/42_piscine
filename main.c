/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:19:44 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 20:07:20 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libbsq.h"
#include <stdlib.h>

//REMOVE
#include "stdio.h"

int		main(int argc, char **argv)
{
	char	*map;
	char	**d_arr;
	int		**int_arr;
	int		length;
	int		height;
	int		*x_y;
	int		i;
	char	*key;

	i = 1;
	x_y = (int*)malloc(sizeof(int) * 2);
	x_y[0] = -1;
	x_y[1] = -1;
	while (i < argc)
	{
		map = ft_file_to_str(argv[i]);
		if (!map)
		{
			ft_puterr("map error\n");
		}
		else
		{
		
//		ft_putstr(map);
//		ft_putchar('\n');
		length = ft_length(map);
		height = ft_height(map);
		key = ft_get_key(map);
//		ft_putstr("Map in the array\n");
		d_arr = ft_get_arr(map);
		if (!ft_valid_key(map) || !ft_validate_map(d_arr, key, length) || height <= 0 ||
			ft_key_len(map) != height || ft_key_len(map) <= 0)
		{
			ft_puterr("map error\n");
			return (0);
		}
		if (height == 1 && length == 1)
		{	if(d_arr[0][0] == key[0])
			{
				ft_putchar(key[2]);
				ft_putchar('\n');
			}
			else
			{
				ft_putchar(key[1]);
				ft_putchar('\n');
			}
			return (0);
		}

//		ft_put_ch_arr(d_arr);
//		ft_putchar('\n');

//		ft_putstr("Map in the ints array\n");
		int_arr = ft_ch_to_int(d_arr, height, length, key[0]);
//		ft_put_int_arr(int_arr, length, height);

//		ft_putstr("\nAlgorithm in action\n");
		x_y = ft_algorithm(int_arr, height, length, x_y);
//		ft_put_int_arr(int_arr, length, height);
//		ft_putnbr(x_y[0]);
//		ft_putchar(' ');
//		ft_putnbr(x_y[1]);
//		ft_putchar('\n');
//		ft_putnbr(int_arr[x_y[0]][x_y[1]]);
//
//		ft_putstr("\nBSQ\n");
		if(x_y[0] != -1 && x_y[1] != -1)
			ft_draw_square(d_arr, x_y, int_arr[x_y[0]][x_y[1]] - 1, key[2]);
		ft_put_ch_arr(d_arr);
		}
		i++;
	}
	return (0);
}
