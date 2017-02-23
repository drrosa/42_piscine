/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 21:31:16 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/24 13:50:19 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	do_op(int a, int b, char op)
{
	int result;

	result = 0;
	if (op == '+')
		result = (a + b);
	else if (op == '-')
		result = (a - b);
	else if (op == '*')
		result = (a * b);
	else if (op == '/' && b != 0)
		result = (a / b);
	else if (op == '%' && b != 0)
		result = (a % b);
	return (result);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		result;
	char	op;

	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = argv[2][0];
		result = 0;
		if (op == '/' && b == 0)
			ft_putstr("Stop : division by zero");
		else if (op == '%' && b == 0)
			ft_putstr("Stop : modulo by zero");
		else
		{
			if (argv[2][1] == '\0')
				result = do_op(a, b, op);
			ft_putnbr(result);
		}
		ft_putchar('\n');
	}
	return (0);
}
