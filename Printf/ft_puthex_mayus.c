/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_mayus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:06:34 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/19 17:33:44 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_mayus(unsigned int nb, int *pt)
{
	if (nb >= 16)
	{
		ft_puthex_mayus(nb / 16, pt);
		ft_puthex_mayus(nb % 16, pt);
	}
	else
	{
		if (nb <= 9)
			ft_putchar((nb + '0'), pt);
		else
			ft_putchar((nb - 10 + 'A'), pt);
	}
}
