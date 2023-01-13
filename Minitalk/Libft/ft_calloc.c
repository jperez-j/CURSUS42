/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:12:17 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/03 10:25:12 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = malloc(n * size);
	if (mem == NULL)
		return (0);
	while (i < n * size)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}
