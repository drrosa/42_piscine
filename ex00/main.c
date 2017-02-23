/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/29 17:39:46 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/29 23:39:51 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int add_sub(char **str);
int mult_div_mod(char **str);

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

int	parse_num(char **str)
{
	int a;

	while (**str == ' ')
		*str += 1;
	if (**str == '(')
	{
		*str += 1;
		a = add_sub(str);
		if (**str == ')')
			*str += 1;
		return (a);
	}
	return (ft_atoi(str));
}

int	mult_div_mod(char **str)
{
	int		a;
	int		b;
	char	op;

	a = parse_num(str);
	while (**str)
	{
		while (**str == ' ')
			*str += 1;
		op = **str;
		if (op != '*' && op != '/' && op != '%')
			return (a);
		*str += 1;
		b = parse_num(str);
		a = do_op(a, b, op);
	}
	return (a);
}

int	add_sub(char **str)
{
	int		a;
	int		b;
	char	op;

	a = mult_div_mod(str);
	while (**str)
	{
		while (**str == ' ')
			*str += 1;
		op = **str;
		if (op != '+' && op != '-')
			return (a);
		*str += 1;
		b = mult_div_mod(str);
		a = do_op(a, b, op);
	}
	return (a);
}

int	eval_expr(char *str)
{
	return (add_sub(&str));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
