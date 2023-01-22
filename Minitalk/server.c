/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:32:18 by jperez-j          #+#    #+#             */
/*   Updated: 2023/01/18 19:25:14 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler_sigusr(int signal)
{
	static int	bits = 0;
	static int	c = 0;

	if (signal == SIGUSR1)
	{
		c = c | (0x01 << bits);
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
		ft_printf("\x1b[31mError: wrong format.\x1b[0m\n");
		ft_printf("\x1b[33mTry: ./server\x1b[0m\n");
		return (0);
	}
	pid = getpid();
	ft_printf("\x1b[32mPID:\x1b[0m %d\n", pid);
	ft_printf("\x1b[2mWaiting for a message...\x1b[0m\n");
	signal(SIGUSR2, handler_sigusr);
	signal(SIGUSR1, handler_sigusr);
	while (argc == 1)
	{
		pause();
	}
	return (0);
}
