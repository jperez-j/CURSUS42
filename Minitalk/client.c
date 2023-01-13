/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jddperez <jddperez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:01:44 by jperez-j          #+#    #+#             */
/*   Updated: 2022/12/21 14:22:15 by jddperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	check_pid(char c)
{
	if (c < '0' && c > '9')
	{
		ft_printf("error: invalid PID\n");
		exit(EXIT_FAILURE);
	}
}

void	get_binary(char c, int pid)
{
	int	counter;

	counter = 0;
	while (c != 0)
	{
		if ((c % 2) == 0)
		{
			kill(pid, SIGUSR2);
			ft_printf("0");
		}
		else
		{
			kill(pid, SIGUSR1);
			ft_printf("1");
		}
		c = c / 2;
		counter++;
	}
	while (counter < 8)
	{
		kill(pid, SIGUSR2);
		ft_printf("0");
		counter++;
	}
	ft_printf("\n");
}

int	main(int argc, char **argv)
{
	int		pid;
	int		i;
	int		j;

	i = 0;
	j = 0;
	pid = atoi(argv[1]);
	if (argc != 3)
	{
		ft_printf("error: invalid arguments\n");
		exit(EXIT_FAILURE);
	}
	while (argv[1][j] != '\0')
	{
		check_pid(argv[1][j]);
		j++;
	}
	while (argv[2][i] != '\0')
	{
		get_binary(argv[2][i], pid);
		usleep(100);
		i++;
	}
	return (0);
}
