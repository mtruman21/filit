/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzina <kzina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/27 15:06:05 by tdupont           #+#    #+#             */
/*   Updated: 2019/05/30 16:02:10 by kzina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include "libft/libft.h"

typedef struct	s_map
{
	int			size;
	char		**array;
}				t_map;
typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;
typedef struct	s_etris
{
	char		**pos;
	int			width;
	int			height;
	char		value;
}				t_etris;

void			ft_free_map(t_map *map);
void			ft_print_map(t_map *map);
t_map			*ft_create_map(int size);
int				ft_put_tetri(t_etris *tetri, t_map *map, int x, int y);
void			set_figure(t_etris *tetri, t_map *map, t_point *point, char c);
t_list			*ft_read_fil(int fd);
t_map			*ft_solution(t_list *list);
t_list			*free_list(t_list *list);
void			free_tetris(t_etris *tetri);
t_etris			*ft_tetris_new(char **pos, int width, int height, char value);
t_point			*ft_point_new(int x, int y);
#endif
