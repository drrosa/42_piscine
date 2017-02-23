/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_key.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 20:03:01 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 20:31:08 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_get_key(char *str)
{
	char	*key;
	int		i;
	int		j;

	i = 0;
	j = 3;
	key = (char*)malloc(sizeof(key) * 4);
	while (str[i] != '\n')
		i++;
	key[j] = '\0';
	while (j >= 0)
	{
		key[--j] = str[--i];
	}
	return (key);
}
