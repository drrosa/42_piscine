/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 15:49:54 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 19:21:37 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_valid_key(char *str)
{
	int i;
	int ch_count;

	i = 0;
	ch_count = 0;
	while (str[i] <= '9' && str[i] >= '0' && str[i] != '\n')
		i++;
	while (str[i] != '\n')
	{
		ch_count++;
		i++;
	}
	i--;
	if (ch_count != 3 || str[i] == str[i - 1] || str[i] == str[i - 2]
			|| str[i - 1] == str[i - 2])
		return (0);
	else
		return (1);
}

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
	if (i == 0)
		return (0);
	key[j] = '\0';
	while (j >= 0)
	{
		key[--j] = str[--i];
	}
	return (key);
}

int		ft_validate_map(char **map, char *key, int length)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (map[i])
	{
		while (map[i][j])
		{
			if (map[i][j] != key[0] && map[i][j] != key[1])
				return (0);
			j++;
		}
		if (j != length)
			return (0);
		j = 0;
		i++;
	}
	return (1);
}

void	ft_puterr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}
