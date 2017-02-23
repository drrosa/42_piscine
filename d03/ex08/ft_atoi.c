/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 22:30:47 by exam              #+#    #+#             */
/*   Updated: 2017/01/14 00:05:17 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_atoi(const char *str)
{
	int pos[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000};
	
	int result= 0;
	int i = 0;
	int n = 0;
	int size = 0;
	int num = 0;

	while(str[size])
		size++;

	n = size - 1;

	if(str[0] == '-')
	{
		i++;
		n--;
	}

	while(i < size)
	{
		num = str[i] - 48;
		if(num < 0 || num > 9)
		{	
			result = result / pos[n+1];
			break;
		}
		result += num * pos[n];
		i++;
		n--;	
	}

	if(str[0] == '-')
		result = result * -1;

	return (result);
}
