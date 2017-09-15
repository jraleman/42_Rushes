/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strjoin_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:11:21 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/11 15:11:21 by jaleman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strjoin_00_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	print_endl(BLUE"FT_STRJOIN:"NC);
	load_test(&test_list, "Basic test", &ft_strjoin_01_basic_test);
	load_test(&test_list, "Empty strings", &ft_strjoin_02_empty_strings);
	load_test(&test_list, "Big strings", &ft_strjoin_03_big_strings);
	return (launch_tests(&test_list));
}
