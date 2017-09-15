/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_unittest_strlen_basic_test.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:06:49 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:06:51 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	unittest_strlen_01_basic_test(void)
{
	if (unittest_strlen("abcde") == 5)
		return (0);
	else
		return (-1);
}
