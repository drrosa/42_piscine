/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 16:37:59 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/23 16:55:56 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *return_vals;
	int i;

	return_vals = (int *)malloc(sizeof(*return_vals) * length);
	i = 0;
	while (i < length)
	{
		return_vals[i] = f(tab[i]);
		i++;
	}
	return (return_vals);
}
