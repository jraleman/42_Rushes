/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_pack_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:45:15 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/13 23:53:34 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	unsigned int count;

	count = 0;
	while ((count < n) && (src[count] != '\0'))
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	while ((*s != '\0') && (*s != c))
		s++;
	if (*s == c)
		return ((char *)s);
	else
		return (NULL);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		count;

	count = 0;
	if (!(dest = (char *)malloc((ft_strlen((char *)src) + 1) * sizeof(char))))
		return (NULL);
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
