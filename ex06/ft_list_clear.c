/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/25 19:50:17 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/25 20:12:24 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *node;
	t_list *tmp;

	node = *begin_list;
	while (node->next)
	{
		tmp = node;
		free(node);
		node = tmp->next;
	}
	*begin_list = NULL;
}
