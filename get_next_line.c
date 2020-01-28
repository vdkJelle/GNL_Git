/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelvan-d <jelvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 16:30:55 by jelvan-d          #+#    #+#             */
/*   Updated: 2020/01/28 09:15:36 by jelvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		ft_writeline(char **ret, char **line)
{
	if (**ret == 0)
		return (0);
	*line = ft_strdup(*ret, 10);
	*ret = ft_strchr(*ret, 10);
	*ret -= -1;
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static char			*ret[FD_SIZE];
	char				buf[BUFFER_SIZE + 1];
	int					i;

	i = 1;
	if (fd < 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!ret[fd])
	{
		ret[fd] = malloc(sizeof(char));
		ret[fd][0] = '\0';
	}
	while (i && !ft_strchr(ret[fd], 10))
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i < 0)
			return (-1);
		buf[i] = '\0';
		ret[fd] = ft_strjoin(ret[fd], buf);
	}
	return (ft_writeline(&ret[fd], line));
}
