/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_unittest_isalnum_test_digit.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:47:00 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:47:09 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	unittest_isalnum_01_test_digit(void)
{
	if (unittest_isalnum('5') == 1)
		return (0);
	else
		return (-1);
}
