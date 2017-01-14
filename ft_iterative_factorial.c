/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 13:29:11 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/14 15:49:21 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int factorial;

	i = 0;
	factorial = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i < nb)
	{
		factorial *= i + 1;
		i++;
	}
	return (factorial);
}
