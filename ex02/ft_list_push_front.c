/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 18:49:02 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/24 19:46:22 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	if (*begin_list)
	{
		new_elem = ft_create_elem(data);
		new_elem->next = *begin_list;
		*begin_list = new_elem;
	}
	else
		*begin_list = ft_create_elem(data);
}
