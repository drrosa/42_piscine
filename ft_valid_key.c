/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_key.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:49:54 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 16:26:36 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_valid_key(char *str)
{
	int i;
	int ch_count;

	i = 0;
	ch_count = 0;
	while (str[i] >= '9' && str[i] <= '0' && str[i] != '\n')
		i++;
	while (str[i] != '\n')
	{
		ch_count++;
		i++;
	}
	if (ch_count != 3)
		return (0);
	else
		return (1);
}
