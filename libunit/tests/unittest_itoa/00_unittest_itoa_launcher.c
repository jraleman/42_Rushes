/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_unittest_itoa_launcher.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:48:10 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:50:07 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	unittest_itoa_00_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	print_endl(BLUE"UNITTEST_ITOA:"NC);
	load_test(&test_list, "Basic test", &unittest_itoa_01_basic_test);
	return (launch_tests(&test_list));
}
