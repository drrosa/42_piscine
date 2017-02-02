/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:07:50 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 20:07:37 by drosa-ta         ###   ########.fr       */
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
	if (fd == -1)
		return (0);
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
	char	c;
	int		ret;

	i = 0;
	temp = (char*)malloc(sizeof(temp) * ft_file_len(argv));
	fd = open(argv, O_RDONLY, S_IRUSR);
	if (!temp || fd == -1)
		return (0);
	while ((ret = read(fd, &c, 1)))
	{
		if (ret == -1)
			return (0);
		temp[i] = c;
		i++;
	}
	if (!ret && i == 0)
	{
		return (0);
	}
	temp[i] = '\0';
	close(fd);
	return (temp);
}
