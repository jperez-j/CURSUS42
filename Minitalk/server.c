/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jddperez <jddperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:18 by jperez-j          #+#    #+#             */
/*   Updated: 2023/01/09 20:22:15 by jddperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

// void	handler_sigusr(int signum)
// {
// 	static int	c = 0xFF;
// 	static int	bits = 0;
	
// 	if (signum == SIGUSR2)
// 	{
// 		ft_printf("sigusr2 = 0 ---->");
// 		c ^= 0x01 << bits;
// 		ft_printf("%c\n", c);
// 	}
// 	else if (signum == SIGUSR1)
// 	{
// 		ft_printf("sigusr1 = 1 ---->");
// 		c |= 0x01 << bits;
// 		ft_printf("%c\n", c);
// 	}
// 	bits++;
// 	if (bits == 8)
// 	{
// 		ft_printf("%c", c);
//    		bits = 0;
//    		c = 0;
// 	}	
// }

// void	handler_sigusr(int signum)
// {
// 	static int	bit;
// 	static int	i;

// 	if (signal == SIGUSR1)
// 		i |= (0x01 << bit);
// 	bit++;
// 	if (bit == 8)
// 	{
// 		ft_printf("%c", i);
// 		bit = 0;
// 		i = 0;
// 	}
// }

void	handler_sigusr(int signum)
{
	static int	c;
	static int	bits = 0;
	int			sign;
	
	if (signum == SIGUSR2)
	{
		ft_printf("sigusr2 = 0 ---->");
		sign = 0;
		c |= 1 & sign << bits;
		ft_printf("%c\n", c);
	}
	else if (signum == SIGUSR1)
	{
		ft_printf("sigusr1 = 1 ---->");
		sign = 1;
		c |= 1 & sign << bits;
		ft_printf("%c\n", c);
	}
	bits++;
	if (bits == 8)
	{
		ft_printf("%c", c);
   		bits = 0;
   		c = 0;
	}	
}

int	main(int argc, char **argv)
{
	pid_t	pid;

	(void)argv;
	if (argc != 1)
	{
		ft_printf("\033[91mError: wrong format.\033[0m\n");
		ft_printf("\033[33mTry: ./server\033[0m\n");
		return (0);
	}
	pid = getpid();
	ft_printf("PID = %d\n", pid);
	while (argc == 1)
	{
	signal(SIGUSR2, handler_sigusr);
	signal(SIGUSR1, handler_sigusr);
	pause();
	}
	return (0);
}
