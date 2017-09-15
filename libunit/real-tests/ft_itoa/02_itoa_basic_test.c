/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_itoa_basic_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:10:59 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/11 15:11:00 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int		ft_itoa_02_basic_test(void)
{
	if (str_compare(ft_itoa(-1234), "-1234") == 0)
		return (0);
	else
		return (-1);
}
