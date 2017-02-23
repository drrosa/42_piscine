/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 22:30:47 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/29 23:11:44 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char **str)
{
	int result;
	int i;
	int sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((**str < '0' || **str > '9') && (**str < 'A' ||
			**str > 'Z') && (**str < 'a' || **str > 'z'))
	{
		if (**str == '-')
		{
			sign = -1;
			break ;
		}
		*str += 1;
	}
	while (**str)
	{
		if (**str - 48 < 0 || **str - 48 > 9)
			break ;
		result = result * 10 + **str - 48;
		*str += 1;
	}
	if (sign == -1)
		result = result * -1;
	return (result);
}
