/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strsplit_launcher.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 20:13:54 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/13 23:54:44 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strsplit_00_launcher(void)
{
	t_unit_test	*test_list;

	test_list = NULL;
	print_endl(BLUE"FT_STRSPLIT:"NC);
	load_test(&test_list, "Empty string", &ft_strsplit_01_empty_string);
	load_test(&test_list, "No split", &ft_strsplit_02_no_split);
	load_test(&test_list, "Split start", &ft_strsplit_03_split_start);
	load_test(&test_list, "Split words", &ft_strsplit_04_split_words);
	return (launch_tests(&test_list));
}
