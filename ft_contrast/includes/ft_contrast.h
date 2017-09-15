/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contrast.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/08 01:13:04 by jaleman           #+#    #+#             */
/*   Updated: 2017/04/08 01:13:05 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTRAST_H
# define FT_CONTRAST_H

/*
** Required header files.
*/

# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <pthread.h>

/*
** User defined header files.
*/

# include "libft.h"
# include "get_next_line.h"

/*
** PGM Structures
**
** @t_img  :  Get the data from a pgm image file.
**                height   -> height of the image.
**                width    -> width of the image.
**                max_grey -> max value of gray (the higher, the lighter).
**                canvas   -> used to store the data.
**
** @t_attr :  Store the attributes (arguments) entered by the user.
**                c_lv     -> store the max_grey value.
**                input    -> store the pgm input filename.
**                output   -> store the pgm output filename (user defined).
**
** @t_pgm  :  Call everything. ;)
*/

typedef struct	s_img
{
	int		height;
	int		width;
	int		max_grey;
	int		**canvas;
}				t_img;

typedef struct	s_attr
{
	int		c_lv;
	char	*input;
	char	*output;
}				t_attr;

typedef struct	s_pgm
{
	t_img	img;
	t_attr	attr;
}				t_pgm;

/*
** Prototypes of the functions.
*/

int				validate_data(int fd, t_pgm *pgm);
void			read_data(int fd, t_pgm *pgm);
void			write_pgm(char *filename, t_pgm *pgm);
void			contrast_pgm(double percent, t_pgm *pgm);

/*
** Test functions
*/

void			print_canvas(t_img img);
void			print_pgm(t_pgm *pgm);

#endif
