/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_itoa_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:10:37 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/11 15:10:38 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_itoa_00_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	print_endl(BLUE"FT_ITOA:"NC);
	load_test(&test_list, "Test with 0", &ft_itoa_01_test_with_0);
	load_test(&test_list, "Basic test", &ft_itoa_02_basic_test);
	load_test(&test_list, "Big number", &ft_itoa_03_big_number);
	load_test(&test_list, "Minimum number", &ft_itoa_04_minimum_number);
	return (launch_tests(&test_list));
}
