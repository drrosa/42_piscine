/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 16:02:03 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/17 17:07:45 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
		(c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		is_upcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int is_word;

	i = 0;
	is_word = 1;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
			is_word = 1;
		else if (is_lowercase(str[i]) && is_word == 1)
		{
			str[i] -= 32;
			is_word = 0;
		}
		else if (is_upcase(str[i]) && is_word == 1)
		{
			str[i] += 32;
			is_word = 0;
		}
		else
			is_word = 0;
		i++;
	}
	return (str);
}
