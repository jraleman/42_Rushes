/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:18:13 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/10 18:18:14 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Function to load a test.
*/

void	load_test(t_unit_test **test_list, char *name, int (*test)(void))
{
	t_unit_test	*copy_test_list;
	t_unit_test	*test_to_add;

	test_to_add = new_test(name, test);
	if (!(*test_list))
		*test_list = test_to_add;
	else
	{
		copy_test_list = *test_list;
		while (copy_test_list->next)
			copy_test_list = copy_test_list->next;
		copy_test_list->next = test_to_add;
	}
}
