/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_pack_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:44:30 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/14 00:42:03 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static const unsigned long g_mask01 = 0x0101010101010101;
static const unsigned long g_mask80 = 0x8080808080808080;

int		test_byte(const char *p)
{
	if (p[0] == '\0')
		return (0);
	if (p[1] == '\0')
		return (1);
	if (p[2] == '\0')
		return (2);
	if (p[3] == '\0')
		return (3);
	if (p[4] == '\0')
		return (4);
	if (p[5] == '\0')
		return (5);
	if (p[6] == '\0')
		return (6);
	if (p[7] == '\0')
		return (7);
	return (-1);
}

size_t	ft_strlen(const char *str)
{
	const char			*p;
	const unsigned long	*lp;
	int					x;

	p = str;
	while ((uintptr_t)p & sizeof(long) - 1)
	{
		if (*p == '\0')
			return (p - str);
		p++;
	}
	lp = (const unsigned long *)p;
	while (1)
	{
		if ((*lp - g_mask01) & g_mask80)
		{
			p = (const char *)(lp);
			if ((x = test_byte(p)) >= 0)
				return (p - str + x);
		}
		lp++;
	}
	return (0);
}

void	putstring(char *s)
{
	write(1, s, ft_strlen(s));
}

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str_bis;
	unsigned char	c_bis;

	str_bis = str;
	c_bis = c;
	while (n)
	{
		*str_bis++ = c_bis;
		n--;
	}
	return (str);
}

char	*ft_strnew(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_memset(str, 0, size + 1);
	return (str);
}
