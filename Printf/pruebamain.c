/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebamain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:11:26 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/26 21:32:43 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// void counter(int *pt)
// {
// 	*pt += 50;
// }

// int	main(void)
// {
// 	unsigned long	*nb;
// 	int num = 0;
// 	counter(&num);
// 	// nb = 55787485;
// 	// ft_putpointer(nb);
// 	// printf("numero %p se llama así porque %s lo quiso\n", 300, "paco");
// 	// printf("numero %p se llama así porque %s lo quiso", nb, "paco");
// 	printf("num = %d\n", num);
// }

int	main(void)
{
	// char	c;
	// int		i;
	// int		len;

	// c = 'z';
	// i = 86;
	// len = ft_printf("NULL %s NULL\n", NULL);
	// len = printf("NULL %s NULL\n", NULL);
	// printf("");
	ft_printf("mi función da %x\n", 42);
	printf("la función original da %x\n", 42);
}
