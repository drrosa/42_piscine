/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_arr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 01:26:13 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 23:09:45 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_length(char *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] && str[i] != '\n')
	{
		i++;
	}
	i++;
	while (str[i] && str[i] != '\n')
	{
		len++;
		i++;
	}
	return (len);
}

int		ft_height(char *str)
{
	int i;
	int h;

	i = 0;
	h = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			h++;
		i++;
	}
	return (h - 1);
}

char	**ft_alloc_arr(int height, int length)
{
	int		i;
	char	**d_arr;

	i = 0;
	d_arr = (char**)malloc(sizeof(d_arr) * (height + 1));
	while (i < height)
	{
		d_arr[i] = (char*)malloc(sizeof(d_arr) * (length + 1));
		i++;
	}
	d_arr[i] = 0;
	return (d_arr);
}

char	**ft_set_values(char *str, char **d_arr)
{
	int x;
	int y;
	int i;

	x = 0;
	y = 0;
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		if (str[i] != '\n')
			d_arr[y][x++] = str[i];
		else
		{
			d_arr[y++][x] = '\0';
			x = 0;
		}
		i++;
	}
	return (d_arr);
}

char	**ft_get_arr(char *str)
{
	return (ft_set_values(str, ft_alloc_arr(ft_height(str), ft_length(str))));
}
