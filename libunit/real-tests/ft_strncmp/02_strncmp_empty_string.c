/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strncmp_empty_string.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:22:26 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:22:27 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strncmp_02_empty_string(void)
{
	if (ft_strncmp("abc", "", 3) > 0)
		return (0);
	else
		return (-1);
}
