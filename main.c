/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelvan-d <jelvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 14:40:55 by jelvan-d          #+#    #+#             */
/*   Updated: 2020/01/28 12:20:07 by jelvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	int		fd;
	char	*line;
	int		i;
	int		ret;

	i = 4;
	ret = 1;
	fd = open("testfile.txt", O_RDONLY);
	while (ret)
	{
		ret = get_next_line(fd, &line);
		//printf("%i\n", ret);
		printf("line: %s\n", line);
		i--;
		free(line);
		line = NULL;
	}
	while (1) {}
	return (0);
}
