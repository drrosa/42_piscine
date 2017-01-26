/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 21:31:49 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/25 16:24:22 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	t_list	*temp_node;
	int		i;

	list = NULL;
	i = 1;
	while (i < ac)
	{
		temp_node = ft_create_elem(av[i]);
		list = temp_node;
		temp_node->next = list;
		i++;
	}
	return (list);
}
