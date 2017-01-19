/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:53:23 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/19 15:42:14 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int i;
	int size;

	i = 0;
	array = NULL;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	size = max - min;
	if (min < 0 && max < 0)
		size = -min - -max;
	array = (int*)malloc(sizeof(*array) * size);
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}
