/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strsplit_split_start.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:26:39 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/13 23:56:10 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strsplit_03_split_start(void)
{
	char	**tt;

	tt = ft_strsplit("****hello", '*');
	if (str_compare(tt[0], "hello") == 0)
		return (0);
	else
		return (-1);
}
