/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyildiri <cyildiri@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/09 15:53:10 by cyildiri          #+#    #+#             */
/*   Updated: 2017/04/09 15:54:37 by cyildiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_contrast.h"

void print_canvas(t_img img)
{
	int		i;
	int		j;

	i = 0;
	while (i < img.height)
	{
		j = 0;
		while (j < img.width)
		{
			printf("%d", img.canvas[i][j]);
			if (j != img.width - 1)
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}

void print_pgm(t_pgm *pgm)
{
	printf("input file: %s\n", pgm->attr.input);
	printf("output file: %s\n", pgm->attr.output);
	printf("contrast_level: %d\n", pgm->attr.c_lv);

	printf("=======\n");
	printf("image =\n");
	printf("=======\n");
	printf("height: %d\n", pgm->img.height);
	printf("width: %d\n", pgm->img.width);
	printf("max_grey: %d\n", pgm->img.max_grey);
	printf("canvas:\n");
	print_canvas(pgm->img);
}
