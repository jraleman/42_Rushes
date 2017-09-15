/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strsplit_split_words.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:27:37 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/13 23:58:23 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strsplit_04_split_words(void)
{
	char	**tt;

	tt = ft_strsplit("***hello**world**!**", '*');
	if (!(str_compare(tt[0], "hello")) && !(str_compare(tt[1], "world"))\
			&& !(str_compare(tt[2], "!")) && tt[3] == NULL)
		return (0);
	else
		return (-1);
}
