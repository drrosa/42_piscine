/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 10:43:24 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/19 12:34:47 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;
	int size;

	i = 0;
	range = NULL;
	if (min >= max)
		return (range);
	size = max - min;
	if (min < 0 && max < 0)
		size = -min - -max;
	range = (int*)malloc(sizeof(*range) * size);
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
