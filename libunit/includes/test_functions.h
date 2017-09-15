/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_functions.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:39:15 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/13 23:35:03 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_FUNCTIONS_H
# define TEST_FUNCTIONS_H

# include <unistd.h>
# include <stdlib.h>

char	*unittest_itoa(int n);
char	*unittest_strdup(const char *s1);
size_t	unittest_strlen(const char *s);
int		unittest_isalnum(int c);

#endif
