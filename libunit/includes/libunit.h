/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:27:55 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/13 23:50:40 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

/*
** Libraries to use malloc, free, freopen, exit, fork, wait, and write.
*/

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <signal.h>
# include "libft.h"

/*
** ANSI color escape sequences.
*/

# define RED	"\033[0;31m"
# define GREEN	"\033[0;32m"
# define BLUE	"\033[1;34m"
# define NC		"\033[0m"

/*
** Macros used for tested functions.
** @OK   = Test succeeded.
** @KO   = Test failed.
** @SEGV = Segmentation Fault detected.
** @BUSE = Bus Error detected.
*/

# define OK		(0)
# define KO		(-1)
# define SEGV	(11)
# define BUSE	(10)

/*
** Underflow negative return value, a magic number. :)
*/

# define NEG_VAL (65280)

/*
** Structure for the tests.
** @name          = name of the test.
** @test_function = return value of the function.
** @next          = go to the next test.
*/

typedef struct			s_unit_test
{
	char				*name;
	int					(*test_function)(void);
	struct s_unit_test	*next;
}						t_unit_test;

/*
** Framkework's functions prototypes.
*/

t_unit_test				*new_test(char *name, int (*test)(void));
void					load_test(t_unit_test **test_list, char *name, \
									int (*test)(void));
int						launch_tests(t_unit_test **test_list);

/*
** Auxiliary functions prototypes.
*/

void					print_str(char *s);
void					print_endl(char *s);
void					print_number(int n);
int						str_compare(const char *s1, const char *s2);

#endif
