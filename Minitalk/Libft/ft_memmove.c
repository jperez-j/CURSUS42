/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:08:38 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/10 17:09:30 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;

	if (dst == NULL && src == NULL)
		return (0);
	ptr = dst;
	if (src < dst)
	{
		src = src + len;
		dst = dst + len;
		while (len--)
			*(char *)--dst = *(char *)--src;
	}
	else
		while (len--)
			*(char *)dst++ = *(char *)src++;
	return (ptr);
}

/*
La función memmove() devuelve un puntero a dest.
copia len bytes del area de memoria src al area de memoria dest. 
las areas de memoria pueden solaparse.
*/