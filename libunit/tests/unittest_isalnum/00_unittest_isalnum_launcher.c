/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_unittest_isalnum_launcher.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:44:34 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:49:47 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	unittest_isalnum_00_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	print_endl(BLUE"UNITTEST_ISALNUM:"NC);
	load_test(&test_list, "Digit test", &unittest_isalnum_01_test_digit);
	return (launch_tests(&test_list));
}
