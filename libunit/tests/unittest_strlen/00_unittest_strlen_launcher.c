/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_unittest_strlen_launcher.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:54:54 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:55:55 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	unittest_strlen_00_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	print_endl(BLUE"UNITTEST_STRLEN:"NC);
	load_test(&test_list, "Basic test", &unittest_strlen_01_basic_test);
	return (launch_tests(&test_list));
}
