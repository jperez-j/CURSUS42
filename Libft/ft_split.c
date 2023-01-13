/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:44:10 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/12 20:00:37 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_wcount(char const *str, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
		{
			cont++;
		}	
		i++;
	}
	return (cont);
}

static void	ft_free(char **str, int i)
{
	while (i--)
		free(str[i]);
	free(str);
}

static size_t	ft_getend(char const *s, char c, size_t end)
{
	int		i;

	i = end;
	while (s[i] == c && s[i] != '\0')
		i++;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static unsigned int	ft_getstart(char const *s, char c, size_t pos)
{
	while (s[pos] == c && s[pos] != '\0')
		pos++;
	return (pos);
}

char	**ft_split(char const *s, char c)
{
	char	**newstr;
	int		index;
	int		start;
	size_t	end;

	newstr = ft_calloc(((ft_wcount(s, c) + 1)), (sizeof (char *)));
	if (newstr == NULL)
		return (NULL);
	while (*s == c && *s)
		s++;
	if (ft_strlen(s) == 0)
		return (newstr);
	index = 0;
	start = 0;
	end = 0;
	while (index < (ft_wcount(s, c)))
	{
		end = ft_getend(s, c, end);
		newstr[index] = ft_substr(s, start, (end - start));
		if (newstr[index] == NULL)
			ft_free(newstr, index);
		index++;
		start = ft_getstart(s, c, end);
	}
	return (newstr);
}

// int	main(void)
// {
// 	printf("%s\n", ft_split("un gato     bailarin    ", ' ')[3]);
// 	return (0);
// }
