/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_endl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:09:47 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/10 18:10:34 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/*
** Outputs the string s to the standard output followed by a ’\n’.
*/

void	print_endl(char const *s)
{
	while (s && *s)
		write(1, s++, 1);
	write(1, "\n", 1);
}
