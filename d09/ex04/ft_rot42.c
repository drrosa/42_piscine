/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 14:52:25 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/20 16:20:32 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		new_val;
	int		limit;
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
			limit = 'z';
		else if (c >= 'A' && c <= 'Z')
			limit = 'Z';
		if (str[i] + 42 > limit)
		{
			c = (limit - 25);
			str[i] += 42 - (limit - c);
		}
		else
			c = 42;
		str[i] += c;
		i++;
	}
	return (str);
}
