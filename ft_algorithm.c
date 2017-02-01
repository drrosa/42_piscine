/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 07:29:49 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 16:08:47 by drosa-ta         ###   ########.fr       */
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

int		*ft_algorithm(int **arr, int height, int length)
{
	int x;
	int y;
	int *max;
	int tmp;

	x = 1;
	y = 1;
	tmp = 0;
	max = (int*)malloc(sizeof(int) * 2);
	while (y < height)
	{
		if (x > length - 1)
		{
			if (y == height - 1)
				break ;
			y++;
			x = 0;
		}
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
		x++;
	}
	return (max);
}

void	ft_draw_square(char **d_arr, int x_limit, int y_limit, int size)
{
	int x;
	int y;

	x = x_limit - size;
	y = y_limit - size;
	while (x <= x_limit)
	{
		while (y <= y_limit)
		{
			d_arr[x][y] = 'x';
			y++;
		}
		y = y_limit - size;
		x++;
	}
}
