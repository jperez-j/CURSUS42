/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:15:58 by jperez-j          #+#    #+#             */
/*   Updated: 2022/09/29 17:06:37 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

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

/* Returns a pointer to the firts 
occurence of the character 'c' in the string 'str'.


int	main(void)
{
	char	str[]="toteking";

	printf("%s\n", strchr(str, 0));
	printf("%s\n", ft_strchr(str, 0));
}
*/