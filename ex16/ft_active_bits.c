/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:57:18 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/20 16:59:44 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	unsigned int n;

	n = 0;
	while (value > 0)
	{
		if (value & 1 == 1)
			n++;
		value >>= 1;
	}
	return (n);
}
