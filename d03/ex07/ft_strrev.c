/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 16:38:08 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/13 23:42:00 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	int		size;
	char	tmp;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	char result[size];
	j = size - 1;
	while (i < size)
	{
		result[i] = str[j];
		i++;
		j--;
	}

	char *a = result;

	return(a);
}
