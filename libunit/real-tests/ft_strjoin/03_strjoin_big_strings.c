/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strjoin_big_strings.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:23:43 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:23:44 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int		ft_strjoin_03_big_strings(void)
{
	if (str_compare(ft_strjoin("Today is my big day. ",
				"Today I'm going to submit libunit."),
				"Today is my big day. Today I'm going to submit libunit.") == 0)
		return (0);
	else
		return (-1);
}
