/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 20:21:56 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/25 17:14:37 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *this_node;

	this_node = begin_list;
	if (begin_list)
	{
		while (this_node->next)
		{
			this_node = this_node->next;
		}
		return (this_node);
	}
	else
		return (this_node);
}
