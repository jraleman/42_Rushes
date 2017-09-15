/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strsplit_no_split.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:27:07 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/11 20:27:08 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strsplit_02_no_split(void)
{
	char	**tt;

	tt = ft_strsplit("*****", '*');
	if (tt[0] == NULL)
		return (0);
	else
		return (-1);
}
