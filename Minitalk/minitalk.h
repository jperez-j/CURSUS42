/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:10:58 by jddperez          #+#    #+#             */
/*   Updated: 2023/01/15 15:40:13 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include "Libft/libft.h"
# include "ft_printf/ft_printf.h"

void	ft_check_pid(char c);
void	ft_get_binary(char c, int pid);

#endif