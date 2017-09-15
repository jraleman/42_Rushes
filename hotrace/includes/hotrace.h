/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hotrace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:45:26 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/14 00:41:15 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOTRACE_H
# define HOTRACE_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/cdefs.h>
# include <limits.h>
# include <sys/types.h>

# define BUFF_SIZE	1024

typedef struct	s_gnl
{
	int				fd;
	char			*buf_line;
	char			*buf_pos;
}				t_gnl;

typedef struct	s_node
{
	char			*content;
	struct s_node	*next[128];
}				t_node;

typedef struct	s_data
{
	char		*key;
	char		*value;
}				t_data;

# ifndef GLOBAL_VAR
#  define GLOBAL_VAR

extern t_node				*g_node;
extern char					g_buffer[60000];
extern size_t				g_len_buffer;
static const unsigned long	g_mask01;
static const unsigned long	g_mask80;

# endif

int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *s);
void			*ft_memset(void *str, int c, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *src);
void			putstring(char *s);
t_node			*new_node(void);
void			search(void);
void			store(void);

#endif
