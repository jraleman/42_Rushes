/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_sort_bubbl.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <jaleman@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 00:59:02 by jaleman           #+#    #+#             */
/*   Updated: 2016/11/22 00:59:06 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Sort (in-place) the elements of an int array.
*/

void	ft_arr_sort_bubbl(int *arr, size_t size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while ((unsigned int)i < size - 1)
	{
		j = i;
		while ((unsigned int)j < size)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j += 1;
		}
		i += 1;
	}
}
