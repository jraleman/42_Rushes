/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgm_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 01:13:04 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/08 01:13:05 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_contrast.h"

/*
** References:
** ----------------------------------------------------------------------------
** http://stackoverflow.com/a/8126925
** https://www.gidforums.com/t-20510.html
** http://netpbm.sourceforge.net/doc/pgm.html
** https://www.youtube.com/watch?v=WgQ10x-TLLs
** https://ugurkoltuk.wordpress.com/2010/03/04/an-extreme-simple-pgm-io-api/
** ----------------------------------------------------------------------------
*/

void		read_data(int fd, t_pgm *pgm)
{
	int		i;
	int		j;
	char	*line;
	char	**split;

	i = 0;
	pgm->img.canvas = ft_mat_new(pgm->img.width, pgm->img.height);
	while (get_next_line(fd, &line))
	{
		if (*line == '#')
			continue ;
		if ((split = ft_strsplit(line, ' ')))
		{
			j = 0;
			while (split[j] && j < pgm->img.width)
			{
				pgm->img.canvas[i][j] = ft_atoi(split[j]);
				j += 1;
			}
		}
		i += 1;
		free(split);
	}
}
