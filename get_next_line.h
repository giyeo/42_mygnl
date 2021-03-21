/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:22:58 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/21 10:24:42 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include <sys/resource.h>

# define EOL			1
# define FT_EOF			0
# define ERROR			-1

int				get_next_line(int fd, char **line);
void			*ft_memcpy(void *dest, const void *src, size_t n);
size_t			ft_strlen(const char *pointer);
char			*ft_strjoin(char *s1, char const *s2);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strchr(const char *str, int c);
#endif

