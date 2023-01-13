/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:07:44 by jperez-j          #+#    #+#             */
/*   Updated: 2022/09/29 16:14:35 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	tofind;
	unsigned char	*dest;
	size_t			i;

	tofind = (unsigned char) c;
	dest = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (dest[i] == tofind)
			return ((void *)&dest[i]);
		i++;
	}
	return (NULL);
}

//
// Locates the first occurrence of c (converted to an unsigned
//  char) in string s. If there is no occurrence, returns NULL.

//  in 'return', we cast the output of the function
//  (it appears that you can do it with any type of variable) and
//  use the pointer of the position, so it can returns the bytes from
//  that position. 
//