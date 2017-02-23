/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 04:55:56 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 07:29:35 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_ch_arr(char **str)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		ft_putstr(str[i]);
		ft_putchar('\n');
		i++;
	}
}

void	ft_put_int_arr(int **arr, int length, int height)
{
	int x;
	int y;

	y = 0;
	x = 0;
	while (y < height)
	{
		ft_putnbr(arr[y][x]);
		if (x > length - 2)
		{
			ft_putchar('\n');
			y++;
			x = 0;
		}
		else
			x++;
	}
}
