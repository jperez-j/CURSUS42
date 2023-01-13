/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:48:53 by jperez-j          #+#    #+#             */
/*   Updated: 2022/09/29 10:47:33 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dst, size_t n)
{
	size_t	len;
	char	*string;

	len = 0;
	string = (char *) dst;
	if (n != 0)
	{	
		while (len < n)
		{
			string[len] = 0;
			len++;
		}
	}
}
