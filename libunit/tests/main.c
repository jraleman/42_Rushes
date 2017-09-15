/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:22:29 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/10 17:22:31 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

static void	print_header(void)
{
	print_endl("/* ************************************************************"
				"******** */");
	print_endl("/*                                                             "
				"         */");
	print_endl("/*         :::      ::::::::                                   "
				"         */");
	print_endl("/*       :+:      :+:    :+:             _ _          _        "
				"    _    */");
	print_endl("/*     +:+ +:+         +:+              (_) |        | |       "
				"   | |   */");
	print_endl("/*   +#+  +:+       +#+      _   _ _ __  _| |_ ______| |_ ___  "
				"___| |_  */");
	print_endl("/* +#+#+#+#+#+   +#+        | | | | '_ \\| | __|______| __/ _ "
				"\\/ __| __| */");
	print_endl("/*      #+#    #+#          | |_| | | | | | |_       | ||  __/"
				"\\__ \\ |_  */");
	print_endl("/*     ###   ########.us     \\__,_|_| |_|_|\\__|       \\__\\_"
				"__||___/\\__| */");
	print_endl("/*                                                             "
				"         */");
	print_endl("/* ************************************************************"
				"******** */\n");
}

void		function_tests(void)
{
	unittest_strlen_00_launcher();
	unittest_isalnum_00_launcher();
	unittest_itoa_00_launcher();
	unittest_strdup_00_launcher();
}

int			main(void)
{
	print_header();
	function_tests();
}
