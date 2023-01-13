/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:03:48 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/04 11:12:19 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		dlen;
	char	*str1;
	char	*str2;

	str1 = (char *) s1;
	str2 = (char *) s2;
	dlen = ft_strlen(s1) + ft_strlen(s2);
	dst = malloc (sizeof (char) * (dlen + 1));
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, str1, (dlen + 1));
	ft_strlcat(dst, str2, (dlen + 1));
	return (dst);
}
