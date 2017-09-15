/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgm_validate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 01:13:04 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/08 01:13:05 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_contrast.h"

/*
** Set the canvas dimension.
*/

static void	set_dimensions(char *line, t_pgm *pgm)
{
	char	**split;

	split = ft_strsplit(line, ' ');
	pgm->img.width = ft_atoi(split[0]);
	pgm->img.height = ft_atoi(split[1]);
}

/*
** Validates the pgm file.
** Reads the header, makes sure it's a valid format (magic number [P2] [ASCII]).
** This is defined in the first line. If all is ok, keep reading the file.
** Skips all the spaces, and if there is a line with #, skip it because it's
** a comment.
** There is a line with just a single number, which is the max gray level.
** There is also a line with two numbers, that define the width and the height
** of the image.
*/

int			validate_data(int fd, t_pgm *pgm)
{
	int		count;
	char	*line;

	get_next_line(fd, &line);
	if (ft_strequ(line, "P2") == 0)
		return (0);
	count = 1;
	while (count < 3)
	{
		if (get_next_line(fd, &line) > 0)
		{
			while (ft_isspace(*line))
				line += 1;
			if (*line == '#')
				continue ;
			if (count == 1)
				set_dimensions(line, pgm);
			else if (count == 2)
				pgm->img.max_grey = ft_atoi(line);
			count += 1;
		}
	}
	return (line == NULL ? 0 : 1);
}
