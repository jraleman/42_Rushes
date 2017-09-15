/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:38:48 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/13 23:53:34 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

t_node	*new_node(void)
{
	t_node	*new;

	if (!(new = (t_node *)malloc(sizeof(t_node))))
		exit(-1);
	new->content = NULL;
	return (new);
}
