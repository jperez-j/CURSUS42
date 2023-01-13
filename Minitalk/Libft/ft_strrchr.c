/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:21:52 by jperez-j          #+#    #+#             */
/*   Updated: 2022/09/29 20:31:01 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	tofind;
	char	*str;

	str = (char *) s;
	tofind = (char) c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == tofind)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
