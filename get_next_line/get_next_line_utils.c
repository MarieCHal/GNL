/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalard <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:40:23 by mchalard          #+#    #+#             */
/*   Updated: 2022/01/18 15:09:05 by mchalard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
	{
		if (*str == 0)
			return (NULL);
		str++;
	}
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i1;
	int		i2;
	char	*s3;

	i1 = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!s3)
		return (NULL);
	while (s1[i1])
	{
		s3[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
	{
		s3[i1] = s2[i2];
		i1++;
		i2++;
	}
	s3[i1] = 0;
	return (s3);
}

char	*ft_strdup(char *s1)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
