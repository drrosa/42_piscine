/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iwagner <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 20:31:17 by iwagner           #+#    #+#             */
/*   Updated: 2017/01/15 20:55:43 by iwagner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int	w;
	int	h;

	w = 0;
	h = 0;
	while (h++ < y)
	{
		while (w++ < x)
		{
			if ((w == 1 && h == 1) || (w == 1 && h == y))
				ft_putchar('A');
			if (w > 1 && w < x && (h == 1 || h == y))
				ft_putchar('B');
			if (h > 1 && h < y && (w == 1 || w == x))
				ft_putchar('B');
			if (w > 1 && w < x && h > 1 && h < y)
				ft_putchar(' ');
			if ((w == x && h == y && x != 1) || (w == x && h == 1 && x != 1))
				ft_putchar('C');
		}
		ft_putchar('\n');
		w = 0;
	}
}
