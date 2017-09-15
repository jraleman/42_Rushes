/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_compare.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 18:52:45 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/11 18:53:01 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Lexicographically compare the null-terminated strings s1 and s2.
*/

int		str_compare(const char *s1, const char *s2)
{
	while (*s1 != 0 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)(*s1) - (unsigned char)*(s2));
}
