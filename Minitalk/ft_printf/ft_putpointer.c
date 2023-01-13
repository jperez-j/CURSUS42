/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:32:53 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/19 17:36:57 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putpointer(unsigned long int smth, int *pt)
{
	if (smth == 0)
		ft_putstring("0x0", pt);
	else
	{
		ft_putstring("0x", pt);
		ft_puthex_minus(smth, pt);
	}
}
