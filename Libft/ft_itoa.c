/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:41:27 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/12 20:01:04 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nb_len(int nb)
{
	int	len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}
//esta funcion cuenta la longitud del numero que queremos 
//pasar a caracter.

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	nb;

	len = ft_nb_len(n);
	nb = n;
	str = ft_calloc((len + 1), sizeof(char));
	if (str == NULL)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb >= 10)
	{
		str[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	str[len - 1] = nb + 48;
	return (str);
}

/*
//despues crearemos una reserva de memoria
// con la longitud del entero +1 contando con el caracter nulo
//despues tomamos en cuenta el caracter - si fuera necesario,
//para decirle que el numero es negativo, 
//indicaremos que en la ultima poscicion hay un caractert nulo
// y despues haremos un cambio de caracter a int, haciendo un 
// dividendo y resto. de atras hacia delante.
int main(void)
{
	printf("este numero quiero pasarlo a un char |%s| ", ft_itoa(-8125));
}
*/