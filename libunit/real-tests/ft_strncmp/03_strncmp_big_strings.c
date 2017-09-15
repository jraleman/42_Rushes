/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_strncmp_big_strings.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:34:18 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:34:20 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strncmp_03_big_strings(void)
{
	if (ft_strncmp("This is a one big string. I like strings!",
					"This is a one big string. The end.", 100) < 0)
		return (0);
	else
		return (-1);
}
