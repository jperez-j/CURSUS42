/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 19:50:44 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/28 16:54:23 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_check(char ch, va_list list, int	*pt)
{
	if (ch == 'c')
		ft_putchar(va_arg(list, int), pt);
	else if (ch == '%')
		ft_putchar('%', pt);
	else if (ch == 's')
		ft_putstring(va_arg(list, char *), pt);
	else if (ch == 'i' || ch == 'd')
		ft_putdec(va_arg(list, int), pt);
	else if (ch == 'u')
		ft_putunsigned(va_arg(list, unsigned int), pt);
	else if (ch == 'X')
		ft_puthex_mayus(va_arg(list, unsigned int), pt);
	else if (ch == 'x')
		ft_puthex_minus(va_arg(list, unsigned int), pt);
	else if (ch == 'p')
		ft_putpointer(va_arg(list, unsigned long int), pt);
}
