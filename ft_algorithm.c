/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 07:29:49 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 16:35:37 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_minimum(int a, int b, int c)
{
	int smallest;

	smallest = 0;
	while (a && b && c)
	{
		a--;
		b--;
		c--;
		smallest++;
	}
	return (smallest);
}

int		*ft_algorithm(int **arr, int height, int length, int *max)
{
	int x;
	int y;
	int tmp;

	y = 0;
	tmp = 0;
	while (++y < height)
	{
		x = 0;
		while (++x < length)
			if (arr[y][x] != 0)
			{
				arr[y][x] = ft_minimum(arr[y - 1][x - 1],
					arr[y - 1][x], arr[y][x - 1]) + 1;
				if (arr[y][x] > tmp)
				{
					tmp = arr[y][x];
					max[0] = y;
					max[1] = x;
				}
			}
	}
	return (max);
}

void	ft_draw_square(char **d_arr, int *limit, int size, char c)
{
	int x;
	int y;

	x = limit[0] - size;
	y = limit[1] - size;
	while (x <= limit[0])
	{
		while (y <= limit[1])
		{
			d_arr[x][y] = c;
			y++;
		}
		y = limit[1] - size;
		x++;
	}
}
