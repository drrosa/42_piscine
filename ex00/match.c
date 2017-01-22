/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:05:15 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/21 22:36:16 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 != *s1)
		return (0);
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s1 == *s2)
		return (match(++s1, ++s2));
	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (match(s1, ++s2));
		return (match(++s1, s2) || match(s1, ++s2));
	}
	return (-1);
}
