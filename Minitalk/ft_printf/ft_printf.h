/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jddperez <jddperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 16:54:57 by jperez-j          #+#    #+#             */
/*   Updated: 2022/12/21 14:03:23 by jddperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_check(char ch, va_list list, int	*pt);
void	ft_putchar(char c, int	*pt);
void	ft_putstring(char *str, int *pt);
void	ft_puthex_mayus(unsigned int nb, int *pt);
void	ft_puthex_minus(unsigned long int nb, int *pt);
void	ft_putpointer(unsigned long int smth, int *pt);
void	ft_putdec(int nb, int *pt);
void	ft_putunsigned(unsigned int nb, int *pt);

#endif