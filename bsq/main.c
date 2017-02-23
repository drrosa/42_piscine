/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:19:44 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 23:24:16 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libbsq.h"
#include <stdlib.h>

void	ft_find_bsq(char *key, char **d_arr, int *x_y)
{
	int		**int_arr;
	int		length;
	int		height;

	length = x_y[0];
	height = x_y[1];
	x_y[0] = -1;
	x_y[1] = -1;
	if (length == 1 && height == 1)
	{
		if (d_arr[0][0] == key[0])
			ft_putchar(key[2]);
		else
			ft_putchar(key[1]);
		ft_putchar('\n');
		return ;
	}
	int_arr = ft_ch_to_int(d_arr, height, length, key[0]);
	x_y = ft_algorithm(int_arr, height, length, x_y);
	if (x_y[0] != -1 && x_y[1] != -1)
		ft_draw_square(d_arr, x_y, int_arr[x_y[0]][x_y[1]] - 1, key[2]);
	ft_put_ch_arr(d_arr);
}

void	ft_handle_bsq(char *map)
{
	char	*key;
	char	**d_arr;
	int		*x_y;

	x_y = (int*)malloc(sizeof(int) * 2);
	x_y[0] = ft_length(map);
	x_y[1] = ft_height(map);
	key = ft_get_key(map);
	d_arr = ft_get_arr(map);
	if (!ft_valid_key(map) || !ft_validate_map(d_arr, key, x_y[0]) ||
			x_y[1] <= 0 || ft_key_len(map) != x_y[1] || ft_key_len(map) <= 0)
		ft_puterr("map error\n");
	else
		ft_find_bsq(key, d_arr, x_y);
}

int		main(int argc, char **argv)
{
	char	*map;
	int		i;

	i = 0;
	if (argc != 1)
		i = 1;
	while (i < argc)
	{
		if (argc == 1)
		{
			ft_stdin_file();
			map = ft_file_to_str("temp");
			i++;
		}
		else
			map = ft_file_to_str(argv[i++]);
		if (!map)
			ft_puterr("map error\n");
		else
			ft_handle_bsq(map);
	}
	return (0);
}
