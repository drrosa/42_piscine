/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:19:44 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 15:38:07 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libbsq.h"

int		main(int argc, char **argv)
{
	char	*map;
	char	**d_arr;
	int		**int_arr;
	int		length;
	int		height;
	int		*max;

	if (argc > 1)
	{
		ft_putstr(ft_file_to_str(argv[1]));
		ft_putchar('\n');
		map = ft_file_to_str(argv[1]);
		ft_putstr("Map in the array\n");
		d_arr = ft_get_arr(map);
		ft_put_ch_arr(d_arr);
		ft_putchar('\n');
		ft_putstr("Map in the ints array\n");
		int_arr = ft_rtn_int(map, d_arr);
		ft_put_int_arr(int_arr, ft_length(map), ft_height(map));
		length = ft_length(map);
		height = ft_height(map);
		ft_putstr("\nAlgorithm in action\n");
		max = ft_algorithm(int_arr, height, length);
		ft_put_int_arr(int_arr, length, height);
//		ft_putnbr(max[0]);
//		ft_putchar(' ');
//		ft_putnbr(max[1]);
//		ft_putchar('\n');
//		ft_putnbr(int_arr[max[0]][max[1]]);
		ft_putstr("\nBSQ\n");
		ft_draw_square(d_arr, max[0], max[1], int_arr[max[0]][max[1]] - 1);
		ft_put_ch_arr(d_arr);
	}
	return (0);
}
