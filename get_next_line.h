/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelvan-d <jelvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 16:30:57 by jelvan-d          #+#    #+#             */
/*   Updated: 2020/01/29 19:28:32 by jelvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE	32
# endif
# ifndef FD_SIZE
#  define FD_SIZE 1024
# endif

int		get_next_line(int fd, char **line);
char	*ft_strjoin(char *s1, char const *s2);
int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1, char offset);
int		ft_writeline(char *ret, char **line);

#endif
