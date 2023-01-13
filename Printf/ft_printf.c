/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:08:24 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/19 00:11:38 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	int		len;
	va_list	lst;

	i = 0;
	len = 0;
	va_start(lst, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			ft_check(str[i + 1], lst, &len);
			i++;
		}
		else
			ft_putchar(str[i], &len);
		i++;
	}
	va_end(lst);
	return (len);
}
