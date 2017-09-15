/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strncmp_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:14:38 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:14:48 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strncmp_00_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	print_endl(BLUE"FT_STRNCMP:"NC);
	load_test(&test_list, "Substring", &ft_strncmp_01_substring);
	load_test(&test_list, "Empty string", &ft_strncmp_02_empty_string);
	load_test(&test_list, "Big strings", &ft_strncmp_03_big_strings);
	load_test(&test_list, "Compare 0 characters",
				&ft_strncmp_04_compare_0_characters);
	return (launch_tests(&test_list));
}
