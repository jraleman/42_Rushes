/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strjoin_basic_test.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaleman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:11:32 by jaleman           #+#    #+#             */
/*   Updated: 2017/02/11 17:05:43 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int		ft_strjoin_01_basic_test(void)
{
	if (str_compare(ft_strjoin("abc", "def"), "abcdef") == 0)
		return (0);
	else
		return (-1);
}
