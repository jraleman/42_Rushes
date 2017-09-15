/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgm_contrast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <cyildiri@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 01:13:04 by cyildiri          #+#    #+#             */
/*   Updated: 2017/04/08 01:13:05 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_contrast.h"

/*
** Changes the contrast value of the pgm file. :D
*/

void		contrast_pgm(double percent, t_pgm *pgm)
{
	int	i;
	int	j;

	i = 0;
	while (i < pgm->img.height)
	{
		j = 0;
		while (j < pgm->img.width)
		{
			pgm->img.canvas[i][j] *= percent;
			j++;
		}
		i++;
	}
}
