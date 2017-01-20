/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:59:33 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/19 18:42:03 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (dest[size])
		size++;
	while (src[i])
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*dest;
	int		i;
	int		j;
	int		total;

	i = 1;
	j = 0;
	total = 0;
	while (i < argc)
	{
		while (argv[i][j++])
			total++;
		j = 0;
		i++;
	}
	dest = (char*)malloc(sizeof(*dest) * total + 1);
	i = 1;
	while (i < argc)
	{
		ft_strcat(dest, argv[i]);
		if (i != argc - 1)
			ft_strcat(dest, "\n");
		i++;
	}
	return (dest);
}
