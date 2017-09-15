/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strsplit_empty_string.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:23:07 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/13 23:55:40 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strsplit_01_empty_string(void)
{
	char	**tt;

	tt = ft_strsplit("hallo", '*');
	if (str_compare(tt[0], "hallo") == 0)
		return (0);
	else
		return (-1);
}
