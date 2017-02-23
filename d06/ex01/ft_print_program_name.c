/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:50:53 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/18 14:14:06 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	argc = 0;
	while (argv[0][i])
		ft_putchar(argv[0][i++]);
	ft_putchar('\n');
	return (0);
}
