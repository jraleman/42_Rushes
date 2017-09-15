/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strncmp_substring.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:21:03 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:21:15 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "test_functions.h"
#include "tests.h"

int	ft_strncmp_01_substring(void)
{
	if (ft_strncmp("abc", "abcde", 3) == 0)
		return (0);
	else
		return (-1);
}
