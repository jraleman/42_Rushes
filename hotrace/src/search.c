/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:39:09 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/14 00:44:50 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

char	*ft_strcat(char *dest, const char *src)
{
	ft_strcpy(ft_strchr(dest, '\0'), src);
	return (dest);
}

int		print(char *a, char *b)
{
	ft_strcat(g_buffer, a);
	ft_strcat(g_buffer, b);
	g_len_buffer += ft_strlen(a);
	g_len_buffer += ft_strlen(b);
	if (g_len_buffer > 112)
	{
		putstring(g_buffer);
		g_buffer[0] = '\0';
		g_len_buffer = 0;
	}
	return (0);
}

int		search_tree(char *key, size_t len)
{
	size_t	i;
	t_node	*head;

	i = 0;
	head = g_node;
	if (!head)
		exit(-1);
	while (i < len)
	{
		if (head->next[(int)key[i]])
		{
			head = head->next[(int)key[i]];
			i++;
		}
		else
			return (print(key, ": Not found.\n"));
	}
	if (!head->content)
		return (print(key, ": Not found.\n"));
	return (print(head->content, "\n"));
}

void	search(void)
{
	char	*line;
	size_t	len;

	len = 0;
	while (1)
	{
		if (get_next_line(0, &line) > 0)
		{
			if ((len = ft_strlen(line)) > 0)
				search_tree(line, len);
			else
			{
				free(line);
				return ;
			}
			free(line);
		}
	}
}
