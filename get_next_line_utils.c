/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaulino <rpaulino@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:54:44 by rpaulino          #+#    #+#             */
/*   Updated: 2021/03/21 15:04:55 by rpaulino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void			*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pointerdest;
	unsigned char	*pointersource;

	pointerdest = dest;
	pointersource = (unsigned char*)src;
	if (pointerdest == 0 && pointersource == 0)
		return (dest);
	while (n-- > 0)
		*pointerdest++ = *pointersource++;
	return (dest);
}

static size_t		ft_strlen(const char *pointer)
{
	size_t counter;

	counter = 0;
	while (pointer[counter] != '\0')
		counter++;
	return (counter);
}

static char			*ft_strjoin(char *s1, char const *s2)
{
	char			*pointer;
	size_t			i;
	size_t			j;

	j = 0;
	i = 0;
	pointer = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (pointer == 0)
		return (0);
	while (s1[i] != '\0')
	{
		pointer[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		pointer[i] = s2[j];
		i++;
		j++;
	}
	pointer[i] = '\0';
	ft_strdel(&s1);
	return (pointer);
}

static char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	if (s == 0)
		return (0);
	sub = malloc((len + 1) * sizeof(char));
	if (sub == 0)
		return (0);
	i = 0;
	while ((i < len) && (start < ft_strlen(s)))
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char				*ft_strchr(const char *str, int c)
{
	int		counter;
	int		len;
	char	*result;

	result = 0;
	counter = 0;
	len = ft_strlen(str) + 1;
	while (counter < len)
	{
		if (str[counter] == c)
		{
			result = (char *)str + counter;
			return (result);
		}
		counter++;
	}
	return (result);
}
