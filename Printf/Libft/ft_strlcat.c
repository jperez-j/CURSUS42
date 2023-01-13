/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:24:54 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/01 17:13:53 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	{
		id++;
	}
	dlen = id;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (srcs[is] != '\0' && is < size - dlen - 1)
	{
		dst[id] = srcs[is];
		id++;
		is++;
	}
	dst[id] = '\0';
	return (dlen + slen);
}
