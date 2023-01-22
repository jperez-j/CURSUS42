/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:53:53 by jperez-j          #+#    #+#             */
/*   Updated: 2023/01/18 16:43:33 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_get_binary(char c, int pid)
{
	int	bits;

	bits = 0;
	while (bits < 8)
	{
		if ((c & (0x01 << bits)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bits++;
	}
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;

	i = 0;
	pid = ft_atoi(argv[1]);
	if (argc != 3)
	{
		ft_printf("\x1b[31merror: invalid arguments\n");
		exit(EXIT_FAILURE);
	}
	while (argv[2][i] != '\0')
	{
		ft_get_binary(argv[2][i], pid);
		i++;
	}
	return (0);
}
