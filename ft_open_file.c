/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:07:50 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 05:22:09 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_file_len(char *argv)
{
	int		i;
	int		fd;
	char	buf[1];

	i = 0;
	fd = open(argv, O_RDONLY, S_IRUSR);
	while (read(fd, buf, 1))
	{
		i++;
	}
	close(fd);
	return (i + 1);
}

char	*ft_file_to_str(char *argv)
{
	int		i;
	int		fd;
	char	*temp;
	char	buf[1];

	i = 0;
	temp = (char*)malloc(sizeof(temp) * ft_file_len(argv));
	fd = open(argv, O_RDONLY, S_IRUSR);
	while (read(fd, buf, 1))
	{
		temp[i] = buf[0];
		i++;
	}
	temp[i] = '\0';
	close(fd);
	return (temp);
}
