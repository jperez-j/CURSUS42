/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:51:15 by jperez-j          #+#    #+#             */
/*   Updated: 2022/11/12 15:52:23 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	tofind;
	int		len;

	i = 0;
	tofind = (char) c;
	len = ft_strlen(str);
	while (i < len + 1)
	{
		if (str[i] == tofind)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

int	ft_strlcpy(char *dst, const char *src, size_t sz)
{
	size_t			i;

	i = 0;
	if (!sz)
		return (ft_strlen(src));
	while (i < (sz - 1) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	slen;
	unsigned int	dlen;
	unsigned int	id;
	unsigned int	is;
	char			*srcs;

	srcs = (char *) src;
	id = 0;
	is = 0;
	slen = ft_strlen(srcs);
	while (dst[id] != '\0')
		id++;
	dlen = id;
	if (size == 0 || size <= dlen)
		return (slen + size);
	if (src == 0)
		return (0);
	while (srcs[is] != '\0' && is < size - dlen - 1)
	{
		dst[id] = srcs[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	return (dlen + slen);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dst;
	size_t	dlen;

	if (s1 == NULL)
	{
		if (s2)
			free(s2);
		return (NULL);
	}	
	if (!s2)
		return (free(s1), free(s2), NULL);
	dlen = ft_strlen(s1) + ft_strlen(s2);
	dst = ft_calloc((dlen + 1), sizeof (char));
	if (dst == NULL)
		return (free(s1), free(s2), NULL);
	ft_strlcpy(dst, s1, (ft_strlen(s1) + 1));
	ft_strlcat(dst, s2, (dlen + 1));
	free (s1);
	return (dst);
}
