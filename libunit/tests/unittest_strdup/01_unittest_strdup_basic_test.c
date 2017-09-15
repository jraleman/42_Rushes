/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_unittest_strdup_basic_test.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:53:16 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:53:44 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	unittest_strdup_01_basic_test(void)
{
	if (str_compare(unittest_strdup("super"), "super") == 0)
		return (0);
	else
		return (-1);
}
