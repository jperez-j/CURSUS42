/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:03:15 by jperez-j          #+#    #+#             */
/*   Updated: 2022/09/30 16:58:51 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*locate the first ocurrence of the null-terminated string -tofind- 
	in the string -s1-, where not more than -len- characters are searched. 
	Charachters that appear after a '\0' character are note searched. */

char	*ft_strnstr(const char *s1, const char *tofind, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*tofind == '\0' || s1 == tofind)
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		if (tofind[j] == s1[i])
		{
			while ((i + j < len) && (s1[i + j] == tofind[j]))
			{
				j++;
				if (!tofind[j])
					return ((char *)&s1[i]);
			}
		}
		i++;
	}
	return (0);
}
