/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 22:30:47 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/16 22:24:10 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' ||
			str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
	{
		if (str[i++] == '-')
		{
			sign = -1;
			break ;
		}
	}
	while (str[i])
	{
		if (str[i] - 48 < 0 || str[i] - 48 > 9)
			break ;
		result = result * 10 + str[i++] - 48;
	}
	if (sign == -1)
		result = result * -1;
	return (result);
}
