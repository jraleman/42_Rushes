/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsampre <nsampre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/13 03:40:20 by nsampre           #+#    #+#             */
/*   Updated: 2017/05/13 23:53:34 by nsampre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hotrace.h"

static char	*ft_join_read_line(char *line, char *buf_pos)
{
	int		line_len;
	int		buff_len;
	char	*gnl_line;

	line_len = 0;
	buff_len = 0;
	if (line)
		line_len = (int)ft_strlen(line);
	while (buf_pos[buff_len] != '\0' && buf_pos[buff_len] != '\n')
		buff_len++;
	if ((gnl_line = ft_strnew(line_len + buff_len)) == NULL)
		return (NULL);
	if (line)
	{
		ft_strcpy(gnl_line, line);
		free(line);
	}
	ft_strncpy(gnl_line + line_len, buf_pos, buff_len);
	gnl_line[line_len + buff_len] = '\0';
	return (gnl_line);
}

static int	ft_read_fd(t_gnl *gnl)
{
	ssize_t		bytes_read;

	bytes_read = read(gnl->fd, gnl->buf_line, BUFF_SIZE);
	if (bytes_read == -1)
		return (-1);
	if (bytes_read == 0)
		return (0);
	gnl->buf_line[bytes_read] = '\0';
	gnl->buf_pos = gnl->buf_line;
	return (1);
}

t_gnl		*ft_init_gnl(int fd)
{
	t_gnl	*new;

	if ((new = (t_gnl *)malloc(sizeof(t_gnl))) == NULL)
		return (NULL);
	if ((new->buf_line = (char *)malloc(BUFF_SIZE + 1)) == NULL)
		return (NULL);
	new->fd = fd;
	new->buf_pos = NULL;
	return (new);
}

int			get_next_line(const int fd, char **line)
{
	static t_gnl	*gnl = NULL;
	int				bytes_read;

	if (fd < 0 || line == NULL)
		return (-1);
	if (gnl == NULL)
		gnl = ft_init_gnl(fd);
	*line = NULL;
	while (gnl->buf_pos || (bytes_read = ft_read_fd(gnl)) == 1)
	{
		*line = ft_join_read_line(*line, gnl->buf_pos);
		if ((gnl->buf_pos = ft_strchr(gnl->buf_pos, '\n')))
		{
			gnl->buf_pos++;
			if (gnl->buf_pos == '\0')
				gnl->buf_pos = NULL;
			return (1);
		}
	}
	if (bytes_read == -1)
		return (-1);
	if (*line == NULL)
		return (0);
	return (1);
}
