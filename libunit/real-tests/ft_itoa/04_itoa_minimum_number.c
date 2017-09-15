/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_itoa_minimum_number.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:02:19 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:02:25 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int		ft_itoa_04_minimum_number(void)
{
	if (str_compare(ft_itoa(-2147483648), "-2147483648") == 0)
		return (0);
	else
		return (-1);
}
