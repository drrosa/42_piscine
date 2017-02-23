/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ch_to_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 05:30:09 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 22:49:13 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libbsq.h"
#include "libft.h"

int		**ft_alloc_intarr(int height, int length)
{
	int i;
	int **di_arr;

	i = 0;
	di_arr = (int**)malloc(sizeof(di_arr) * height);
	while (i < height)
	{
		di_arr[i] = (int*)malloc(sizeof(di_arr) * length);
		i++;
	}
	return (di_arr);
}

int		**ft_ch_to_int(char **ch_arr, int height, int length, char c)
{
	int x;
	int y;
	int **int_arr;

	x = 0;
	y = 0;
	int_arr = ft_alloc_intarr(height, length);
	while (y <= height)
	{
		if (x > length - 1)
		{
			if (y == height - 1)
				break ;
			y++;
			x = 0;
		}
		if (ch_arr[y][x] == c)
			int_arr[y][x] = 1;
		else
			int_arr[y][x] = 0;
		x++;
	}
	return (int_arr);
}
