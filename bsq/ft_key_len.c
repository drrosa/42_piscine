/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 21:21:00 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 22:07:03 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_mini_atoi(char *str, int len)
{
	int result;
	int i;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\a' || str[i] == '\\') && i < len)
		i++;
	if (str[i] == '-' && i < len)
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && i < len)
		i++;
	while (str[i] != '\0' && str[i] <= '9' && str[i] >= '0' && i < len)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int		ft_key_len(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != '\n')
		i++;
	return (ft_mini_atoi(str, i - 3));
}
