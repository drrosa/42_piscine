/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 00:49:06 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/01/31 05:29:10 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void				ft_putnbr(int nb);
void				ft_putchar(char c);
void				ft_swap(int *a, int *b);
void				ft_putstr(char *str);
int					ft_strlen(char *str);
int					ft_strcmp(char *s1, char *s2);
int					ft_atoi(char *str);
char				*ft_strcpy(char *dest, char *src);
char				*ft_strdup(char *src);
int					ft_length(char *str);
int					ft_height(char *str);

#endif
