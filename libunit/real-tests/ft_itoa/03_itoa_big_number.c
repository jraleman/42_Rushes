/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_itoa_big_number.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 16:50:23 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 16:50:26 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int		ft_itoa_03_big_number(void)
{
	if (str_compare(ft_itoa(123456000), "123456000") == 0)
		return (0);
	else
		return (-1);
}
