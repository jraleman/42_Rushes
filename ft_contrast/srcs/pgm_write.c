/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgm_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <cyildiri@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 01:13:04 by cyildiri          #+#    #+#             */
/*   Updated: 2017/04/08 01:13:05 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_contrast.h"

/*
** Writes the pgm image.
*/

static void	write_pgm_image(int file, t_pgm *pgm)
{
	int		i;
	int		j;
	char	*num;

	i = 0;
	while (i < pgm->img.height)
	{
		j = 0;
		while (j < pgm->img.width)
		{
			num = ft_itoa(pgm->img.canvas[i][j]);
			write(file, num, ft_strlen(num));
			if (j != pgm->img.width - 1)
				write(file, " ", 1);
			j++;
		}
		write(file, "\n", 1);
		i++;
	}
}

/*
** Writes the pgm header.
*/

static void	write_pgm_header(int file, t_pgm *pgm)
{
	write(file, "P2\n", 3);
	write(file, ft_itoa(pgm->img.width), ft_nbrlen(pgm->img.width, 10));
	write(file, "\n", 1);
	write(file, ft_itoa(pgm->img.height), ft_nbrlen(pgm->img.height, 10));
	write(file, " ", 1);
	write(file, ft_itoa(pgm->img.max_grey), ft_nbrlen(pgm->img.max_grey, 10));
	write(file, "\n", 1);
}

/*
** Creates and writes the pgm data to a new file.
*/

void		write_pgm(char *filename, t_pgm *pgm)
{
	int		file;

	if ((file = open(filename, O_WRONLY | O_CREAT, 0445)) == -1)
		ft_puterror("Could not create output file!", 4);
	write_pgm_header(file, pgm);
	write_pgm_image(file, pgm);
	close(file);
}
