/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:39:38 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/19 17:35:05 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsigned(unsigned int nb, int *pt)
{
	if (nb > 9)
	{
		ft_putunsigned((nb / 10), pt);
		ft_putunsigned((nb % 10), pt);
	}
	else
		ft_putchar((nb + 48), pt);
}
