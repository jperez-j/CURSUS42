/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:57:00 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/04 10:53:05 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_strlcpy(char *dest, const char *src, size_t sz)
{
	size_t			i;

	i = 0;
	if (!sz)
		return (ft_strlen(src));
	while (i < (sz - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/*
int	main(void)
{
	printf("%lu\n", ft_strlcpy("tortuga", "", 15));
	printf("%lu", strlcpy("tortuga", "", 15));
}

It copies up to size -1 characters from src to dst. NUL-terminating 
the result if dest size is not 0. So:
 
  - If 'sz' is 0, it returns the src length.
  - In case the 'sz - 1' is higher than 0 and the src 
    string has content (not void),
	copies src characters into dst. When it finishes, add the NUL.--- Then, returns
	the src lenght.
*/
