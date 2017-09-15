/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 12:38:45 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 12:38:52 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Outputs the integer n to the standard output.
*/

void	print_number(int n)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		if (n < -9)
			print_number(-(n / 10));
		c = '0' - (n - (n / 10) * 10);
		write(1, &c, 1);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		c = '0' + n % 10;
		write(1, &c, 1);
	}
	else
	{
		c = '0' + n;
		write(1, &c, 1);
	}
}
