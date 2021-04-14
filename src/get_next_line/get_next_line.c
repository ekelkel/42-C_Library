/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 15:31:48 by ekelkel           #+#    #+#             */
/*   Updated: 2019/12/30 16:08:51 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_stock(char **rest, char **line)
{
	char		*tmp;

	if ((tmp = ft_strchr(*rest, '\n')))
	{
		if (!(*line = ft_strsub(*rest, 0, tmp - *rest)))
			return (-1);
		if (!(tmp = ft_strdup(tmp + 1)))
			return (-1);
		free(*rest);
		*rest = tmp;
		return (1);
	}
	return (0);
}

static int			ft_read(char **line, const int fd, char **rest, char *buff)
{
	char	*tmp;
	int		cpt;
	int		st;

	st = 0;
	while ((cpt = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[cpt] = 0;
		if (!(tmp = ft_strjoin(*rest, buff)))
			return (-1);
		free(*rest);
		*rest = tmp;
		if ((st = ft_stock(&(*rest), &(*line))))
			return (1);
		if (st == -1)
			return (-1);
	}
	if (**rest)
	{
		if (!(*line = ft_strdup(*rest)))
			return (-1);
		**rest = 0;
		return (1);
	}
	return (cpt);
}

int					get_next_line(const int fd, char **line)
{
	static t_multifd	ptr[FD_MAX] = {{0}};
	char				buff[BUFF_SIZE + 1];
	int					ret;
	int					st;

	st = 0;
	if (fd < 0 || (fd >= FD_MAX) || !line || BUFF_SIZE <= 0
			|| (!ptr[fd].rest && !(ptr[fd].rest = ft_strnew(0))))
		return (-1);
	if (*ptr[fd].rest && (st = ft_stock(&(ptr[fd].rest), &(*line))))
		return (1);
	if (st == -1)
		return (-1);
	ret = ft_read(&(*line), fd, &(ptr[fd].rest), &buff[0]);
	if (ret == -1)
		return (-1);
	if (ret == 0)
		return (0);
	return (1);
}
