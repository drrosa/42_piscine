/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libbsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gguiulfo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 01:18:34 by gguiulfo          #+#    #+#             */
/*   Updated: 2017/02/01 21:57:11 by gguiulfo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBBSQ_H
# define LIBBSQ_H

char	*ft_file_to_str(char *argv);
char	**ft_get_arr(char *str);
void	ft_put_ch_arr(char **str);
void	ft_put_int_arr(int **arr, int length, int height);
int		**ft_ch_to_int(char **ch_arr, int height, int length, char c);
int		ft_length(char *str);
int		ft_height(char *str);
int		*ft_algorithm(int **arr, int height, int length, int *max);
void	ft_draw_square(char **d_arr, int *limit, int size, char c);
int		ft_key_len(char *str);
char	*ft_get_key(char *str);
int		ft_validate_map(char **map, char *key, int length);
void	ft_puterr(char *str);
int		ft_valid_key(char *str);
void	ft_stdin_file(void);

#endif
