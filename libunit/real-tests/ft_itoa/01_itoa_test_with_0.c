/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_itoa_test_with_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:46:12 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 16:48:10 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int		ft_itoa_01_test_with_0(void)
{
	if (str_compare(ft_itoa(0), "0") == 0)
		return (0);
	else
		return (-1);
}
