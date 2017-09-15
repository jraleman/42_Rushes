/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:35:34 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/13 23:53:34 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

void	add_tree(t_node *head, t_data data, size_t len, size_t depth)
{
	t_node *cur;

	if (len == depth)
	{
		head->content = data.value;
		return ;
	}
	if (head->next[(int)data.key[depth]])
	{
		add_tree(head->next[(int)data.key[depth]], data, len, depth + 1);
		return ;
	}
	cur = new_node();
	head->next[(int)data.key[depth]] = cur;
	add_tree(head->next[(int)data.key[depth]], data, len, depth + 1);
}

void	store(void)
{
	size_t	len;
	t_data	data;

	len = 0;
	while (1)
	{
		if (get_next_line(0, &data.key) > 0)
		{
			if ((len = ft_strlen(data.key)) == 0)
			{
				free(data.key);
				break ;
			}
		}
		if (get_next_line(0, &data.value) > 0)
		{
			if (ft_strlen(data.value) == 0)
			{
				free(data.value);
				break ;
			}
		}
		add_tree(g_node, data, len, 0);
		free(data.key);
	}
}
