/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drosa-ta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 23:05:08 by drosa-ta          #+#    #+#             */
/*   Updated: 2017/01/20 23:19:36 by drosa-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define FALSE		0
# define TRUE		1
# define EVEN(x)	(x % 2) == 0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	1

typedef int	t_bool;

#endif
