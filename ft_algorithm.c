/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 07:29:49 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 08:21:37 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		**ft_algorithm(int **arr, int height, int length)
{
	int x;
	int y;

	x = 1;
	y = 1;
	while (y < height)
	{
		if (x > length - 1)
		{
			if (y == height - 1)
				break;
			y++;
			x = 0;
		}
		if (arr[y][x] != 0)
		{
			arr[y][x] = ft_minimum(arr[y - 1][x - 1],
					arr[y - 1][x], arr[y][x - 1]) + 1;
		}
		x++;
	}
	return (arr);
}
