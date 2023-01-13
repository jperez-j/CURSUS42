/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:43:32 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/06 18:29:42 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*newstr;
	size_t			start;
	size_t			end;

	start = 0;
	end = (ft_strlen(s1)) - 1;
	if (s1[start] == '\0')
		return (ft_strdup(""));
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	newstr = ft_substr(s1, start, (end - start) + 1);
	return (newstr);
}

// int	main(void)
// {
// 	char const	*str;
// 	char const	*set;

// 	str = "aguacates";
// 	set = "gas";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }
