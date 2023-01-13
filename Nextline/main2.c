/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:10:36 by jperez-j          #+#    #+#             */
/*   Updated: 2022/11/12 17:13:45 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"
#include "get_next_line_bonus.h"

int	main(void)
{
	int		fd;

	fd = open("texto.txt", O_RDONLY);
	printf("1ªLÍNEA: %s", get_next_line(fd));
	printf("2ªLÍNEA: %s", get_next_line(fd));
	printf("3ªLÍNEA: %s", get_next_line(fd));
	printf("4ªLÍNEA: %s", get_next_line(fd));
}
