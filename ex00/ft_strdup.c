/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 10:00:07 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/19 10:32:45 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		size;
	int		i;

	size = 0;
	i = 0;
	while (src[size])
		size++;
	dst = (char*)malloc(sizeof(*dst) * size + 1);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}
