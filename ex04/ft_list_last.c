/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/24 20:21:56 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/24 20:41:02 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *next_node;

	next_node = begin_list;
	while (next_node)
	{
		next_node = next_node->next;
	}
	return (next_node);
}
