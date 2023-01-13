/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 20:42:32 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/19 15:36:10 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstring(char *str, int *pt)
{
	int		i;

	i = 0;
	if (str == NULL)
	{
		write (1, "(null)", 6);
		*pt = *pt + 6;
	}
	else
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i], pt);
			i++;
		}
	}	
}
