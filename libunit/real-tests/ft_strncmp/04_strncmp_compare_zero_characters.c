/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_strncmp_compare_zero_characters.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:37:31 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:37:32 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strncmp_04_compare_0_characters(void)
{
	if (ft_strncmp("a", "b", 0) == 0)
		return (0);
	else
		return (-1);
}
