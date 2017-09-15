/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:19:48 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/10 18:19:49 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Function to create a new test.
*/

t_unit_test	*new_test(char *name, int (*test)(void))
{
	t_unit_test	*new_unit_test;

	new_unit_test = (t_unit_test*)malloc(sizeof(t_unit_test));
	new_unit_test->name = name;
	new_unit_test->next = NULL;
	new_unit_test->test_function = test;
	return (new_unit_test);
}
