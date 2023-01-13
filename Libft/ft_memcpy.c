/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:51:46 by jperez-j          #+#    #+#             */
/*   Updated: 2022/09/29 11:46:05 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*pdest;
	char	*psource;
	size_t	i;

	pdest = (char *) dst;
	psource = (char *) src;
	i = 0;
	if ((char)dst == '\0' && (char)src == '\0')
	{
		return (dst);
	}
	while (i < len)
	{
		pdest[i] = psource[i];
		i++;
	}
	return (dst);
}

/* Copies n bytes from memory area src to memory area dst. If both src and dst
	are NULL, it returns nothing.*/