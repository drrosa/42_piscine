/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:12:36 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/12 20:23:53 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_put_char(char c);

void	ft_display_comb(char i, char j, char k)
{
	if (j != k && i != j)
	{
		ft_put_char(i);
		ft_put_char(j);
		ft_put_char(k);
		ft_put_char(',');
		ft_put_char(' ');
	}
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	j = '1';
	k = '2';
	while (i < '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_display_comb(i, j, k);
				k++;
			}
			k = j + 1;
			j++;
		}
		j = i + 1;
		i++;
	}
	ft_put_char('7');
	ft_put_char('8');
	ft_put_char('9');
}
