/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_minus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:04:20 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/19 17:38:06 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_minus(unsigned long int nb, int *pt)
{
	if (nb >= 16)
	{
		ft_puthex_minus((nb / 16), pt);
		ft_puthex_minus((nb % 16), pt);
	}
	else
	{
		if (nb <= 9)
			ft_putchar((nb + '0'), pt);
		else
			ft_putchar((nb - 10 + 'a'), pt);
	}
}
