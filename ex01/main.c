/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 22:50:51 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/26 22:50:53 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFF_SIZE 29000

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
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

int		on_error(char *arg)
{
	ft_puterr("cat: ");
	ft_puterr(arg);
	if (errno == ENOENT)
		write(2, ": No such file or directory\n", 28);
	else if (errno == EACCES)
		write(2, ": Permission denied\n", 20);
	else
		write(2, ": open() error\n", 15);
	return (1);
}

void	on_empty(void)
{
	char	buffer[BUFF_SIZE + 1];
	int		ret;

	while ((ret = read(0, buffer, BUFF_SIZE)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer);
	}
}

int		main(int argc, char **argv)
{
	int		file;
	int		re;
	char	buffer[BUFF_SIZE + 1];
	int		i;

	if (argc == 1)
		on_empty();
	i = 1;
	while (i < argc)
	{
		file = open(argv[i], O_RDONLY, S_IRUSR);
		if (file == -1)
			on_error(argv[i]);
		else
		{
			re = read(file, buffer, BUFF_SIZE);
			buffer[re] = '\0';
			ft_putstr(buffer);
			close(file);
		}
		i++;
	}
	return (0);
}
