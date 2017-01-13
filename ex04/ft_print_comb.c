/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 17:12:36 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/12 19:47:36 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_put_char(char c);

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
				if (j != k && i != j)
				{
					ft_put_char(i);
					ft_put_char(j);
					ft_put_char(k);
					ft_put_char(',');
					ft_put_char(' ');
				}
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
