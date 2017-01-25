/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:31:49 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/25 11:17:45 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*node;
	int		i;

	list = NULL;
	i = 0;
	while (i < ac)
	{
		node = ft_create_elem(av[i]);
		node->next = list;
		list = node;
		i++;
	}
	return (list);
}
