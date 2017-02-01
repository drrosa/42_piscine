/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:19:44 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 23:17:21 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libbsq.h"
#include "stdio.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_get_key(char *str)
{
	char	*key;
	int		i;
	int		j;

	i = 0;
	j = 3;
	key = (char*)malloc(sizeof(key) * 4);
	while (str[i] != '\n')
		i++;
	if(i == 0)
		return (0);
	key[j] = '\0';
	while (j >= 0)
	{
		key[--j] = str[--i];
	}
	return (key);
}

int		ft_validate_map(char **map, char *key, int length)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] != key[0] && map[i][j] != key[1])
				return (0);
			j++;
		}
		if (j != length)
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

void    ft_puterr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        write(2, &str[i], 1);
        i++;
    }
}

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
	while (i < argc)
	{
		map = ft_file_to_str(argv[i]);
		ft_putstr(map);
		ft_putchar('\n');
		length = ft_length(map);
		height = ft_height(map);
		key = ft_get_key(map);

		ft_putstr("Map in the array\n");
		d_arr = ft_get_arr(map);
		if (!ft_validate_map(d_arr, key, length) || height <= 0 ||
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

		ft_put_ch_arr(d_arr);
		ft_putchar('\n');

		ft_putstr("Map in the ints array\n");
		int_arr = ft_ch_to_int(d_arr, height, length, key[0]);
		ft_put_int_arr(int_arr, length, height);

		ft_putstr("\nAlgorithm in action\n");
		x_y = ft_algorithm(int_arr, height, length);
		ft_put_int_arr(int_arr, length, height);
//		ft_putnbr(x_y[0]);
//		ft_putchar(' ');
//		ft_putnbr(x_y[1]);
//		ft_putchar('\n');
//		ft_putnbr(int_arr[x_y[0]][x_y[1]]);
//
		ft_putstr("\nBSQ\n");
		ft_draw_square(d_arr, x_y, int_arr[x_y[0]][x_y[1]] - 1, key[2]);
		ft_put_ch_arr(d_arr);
		i++;
	}
	return (0);
}
