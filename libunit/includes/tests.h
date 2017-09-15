/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedorov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 18:02:16 by ofedorov          #+#    #+#             */
/*   Updated: 2017/02/13 23:55:04 by ofedorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

/*
**  UNITTEST functions
*/

int	unittest_isalnum_00_launcher(void);
int	unittest_isalnum_01_test_digit(void);
int	unittest_itoa_00_launcher(void);
int	unittest_itoa_01_basic_test(void);
int	unittest_strdup_00_launcher(void);
int	unittest_strdup_01_basic_test(void);
int	unittest_strlen_00_launcher(void);
int	unittest_strlen_01_basic_test(void);

/*
**  ft_strncmp
*/

int ft_strncmp_00_launcher(void);
int	ft_strncmp_01_substring(void);
int	ft_strncmp_02_empty_string(void);
int	ft_strncmp_03_big_strings(void);
int	ft_strncmp_04_compare_0_characters(void);

/*
**  ft_itoa
*/

int	ft_itoa_00_launcher(void);
int	ft_itoa_01_test_with_0(void);
int	ft_itoa_02_basic_test(void);
int	ft_itoa_03_big_number(void);
int	ft_itoa_04_minimum_number(void);

/*
**  ft_strjoin
*/

int	ft_strjoin_00_launcher(void);
int	ft_strjoin_01_basic_test(void);
int	ft_strjoin_02_empty_strings(void);
int	ft_strjoin_03_big_strings(void);

/*
** ft_strsplit
*/

int	ft_strsplit_00_launcher(void);
int	ft_strsplit_01_empty_string(void);
int	ft_strsplit_02_no_split(void);
int	ft_strsplit_03_split_start(void);
int	ft_strsplit_04_split_words(void);

#endif
