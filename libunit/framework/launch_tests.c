/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:27:20 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/13 23:59:40 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Execute a test, returns the status depending on the result from the status
** variable.
*/

static int	execute_test(t_unit_test *test)
{
	int pid;
	int status;
	int return_from_test;

	pid = fork();
	if (pid < 0)
		print_endl("Failed to execute test");
	else if (pid == 0)
	{
		return_from_test = test->test_function();
		exit(return_from_test);
	}
	wait(&status);
	if (status == NEG_VAL)
		status = KO;
	return (status);
}

/*
** Get results of the tests, and depending on the return value, prints the
** correct outcome.
*/

static int	get_result(t_unit_test *test)
{
	int	status;

	status = execute_test(test);
	if (status == OK)
		print_endl(GREEN"[OK]"NC);
	else if (status == KO)
		print_endl(RED"[KO]"NC);
	else if (status == BUSE)
		print_endl(RED"[BUSE]" NC);
	else if (status == SEGV)
		print_endl(RED"[SEGV]"NC);
	else
		print_endl(RED"[CRASH]"NC);
	return (status == OK) ? 1 : 0;
}

/*
** Launch the tests, going one by one, and printing the outcome from them.
** If the test is successful, it adds to a counter to see how many of them
** are successful.
*/

int			launch_tests(t_unit_test **test_list)
{
	t_unit_test	*one_test;
	int			success_tests;
	int			total_tests;

	one_test = *test_list;
	success_tests = 0;
	total_tests = 0;
	while (one_test)
	{
		print_str("> ");
		print_str(one_test->name);
		print_str(" : ");
		success_tests += get_result(one_test);
		total_tests++;
		one_test = one_test->next;
	}
	print_endl("");
	print_number(success_tests);
	print_str("/");
	print_number(total_tests);
	print_endl(" tests are successful");
	print_endl("\n-------------------------\n");
	return (total_tests - success_tests == 0) ? 0 : 1;
}
