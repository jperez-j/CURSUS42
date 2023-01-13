/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:03:36 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/19 15:18:40 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putdec(int nb, int *pt)
{
	if (nb == -2147483648)
	{
		ft_putdec((nb / 10), pt);
		ft_putchar('8', pt);
	}
	else if (nb < 0)
	{
		ft_putchar('-', pt);
		nb *= -1;
		ft_putdec(nb, pt);
	}
	else if (nb > 9)
	{
		ft_putdec((nb / 10), pt);
		ft_putdec((nb % 10), pt);
	}
	else
		ft_putchar((nb + 48), pt);
}
