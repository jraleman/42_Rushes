/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strjoin_empty_strings.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 17:05:18 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 17:07:59 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int		ft_strjoin_02_empty_strings(void)
{
	if (str_compare(ft_strjoin("", ""), "") == 0)
		return (0);
	else
		return (-1);
}
