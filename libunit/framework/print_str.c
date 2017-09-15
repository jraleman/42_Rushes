/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:09:21 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/10 18:09:32 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

/*
** Outputs the string s to the standard output.
*/

void	print_str(char const *s)
{
	while (s && *s)
		write(1, s++, 1);
}
