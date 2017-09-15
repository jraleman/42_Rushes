/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:37:34 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/14 00:41:50 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

t_node	*g_node = NULL;
char	g_buffer[60000];
size_t	g_len_buffer;

int	main(void)
{
	g_node = new_node();
	g_buffer[0] = '\0';
	g_len_buffer = 0;
	store();
	search();
	putstring(g_buffer);
	return (0);
}
