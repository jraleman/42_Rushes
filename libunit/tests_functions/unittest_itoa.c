/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unittest_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:58:56 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 15:59:02 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_abs(int n)
{
	return (n < 0) ? -n : n;
}

static char	*insert_nbr(char *number, int n, int length)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		number[0] = '-';
		i = 1;
	}
	while (length-- > i)
	{
		number[length] = '0' + ft_abs(n - (n / 10) * 10);
		n /= 10;
	}
	return (number);
}

char		*unittest_itoa(int n)
{
	int		length;
	char	*number;
	int		power_ten;

	length = 1;
	power_ten = 1;
	while (n / power_ten > 9 || n / power_ten < -9)
	{
		power_ten *= 10;
		length++;
	}
	if (n < 0)
		length++;
	number = 0;
	return (insert_nbr(number, n, length));
}
