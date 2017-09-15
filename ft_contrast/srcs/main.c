/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 01:13:04 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/08 01:13:05 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_contrast.h"

/*
** Parse the arguments.
** @ -f == filename flag  ; gets the name of the input file.
** @ -o == output flag    ; gets the name of the output file.
** @ -c == filename flag  ; gets the contrast level.
*/

static void		parse_arguments(char *argv[], t_pgm *pgm)
{
	while (*++argv)
	{
		if (ft_strequ(*argv, "-f"))
		{
			if (ft_file_extension(*++argv, ".pgm"))
				pgm->attr.input = ft_strdup(*argv);
			else
				ft_puterror("Are you sure it's a .pgm file???", 3);
		}
		else if (ft_strequ(*argv, "-o"))
		{
			if (ft_file_extension(*++argv, ".pgm"))
				pgm->attr.output = ft_strdup(*argv);
			else
				pgm->attr.output = ft_strjoin(*argv, ".pgm");
		}
		else if (ft_strequ(*argv, "-c"))
		{
			pgm->attr.c_lv = ft_atoi(*++argv);
			pgm->attr.c_lv = (pgm->attr.c_lv > 100) ? 100 : pgm->attr.c_lv;
			pgm->attr.c_lv = (pgm->attr.c_lv < 0) ? 0 : pgm->attr.c_lv;
		}
	}
}

/*
** Gets everything rolling. ;)
** I know it's not the most elegant code out there, but does the job.
** Checks if the number of arguments is valid... if it's not, display usage.
** Parse the arguments, open the file, call the read function, and close file.
*/

int				main(int argc, char *argv[])
{
	t_pgm		*pgm;
	int			fd;

	if (!(pgm = (t_pgm *)malloc(sizeof(t_pgm))))
		ft_puterror("Memory allocation error! :(", 1);
	if (argc == 7)
	{
		parse_arguments(argv, pgm);
		if ((fd = open(pgm->attr.input, O_RDONLY)) < 0)
			ft_puterror("Error opening file! Make sure it exists. ;)", 2);
		if (validate_data(fd, pgm) == 0)
			ft_puterror("Not a valid pgm file! >:(", 3);
		read_data(fd, pgm);
		close(fd);
		contrast_pgm(pgm->attr.c_lv / 100.0, pgm);
		write_pgm(pgm->attr.output, pgm);
	}
	else
		printf("usage: %s [-f [input.pgm]] [-c [1 - 100]] [-o output.pgm]\n", \
				argv[0]);
	return (0);
}
