/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:24:25 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/11 21:28:15 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return ((char *) ft_calloc(1, sizeof (char)));
	if ((start + len) <= ft_strlen(s))
		newstr = ft_calloc((len + 1), sizeof (char));
	else
		newstr = ft_calloc(ft_strlen(s) - start + 1, sizeof (char));
	if (newstr == NULL)
		return (NULL);
	while (s[i] != '\0' && len > 0)
	{
		newstr[i] = s[start];
		i++;
		start++;
		len--;
	}
	newstr[i] = '\0';
	return (newstr);
}
