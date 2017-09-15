/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_unittest_itoa_basic_test.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:05:09 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:05:13 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	unittest_itoa_01_basic_test(void)
{
	if (str_compare(unittest_itoa(123), "123") == 0)
		return (0);
	else
		return (-1);
}
