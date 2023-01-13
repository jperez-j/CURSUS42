/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:51:16 by jperez-j          #+#    #+#             */
/*   Updated: 2022/11/09 01:41:37 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 360
# endif

char	*get_next_line(int fd);
char	get_next_line_utils(int fd);
char	*ft_get_line(char *str);
char	*ft_get_extra(char *str);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strlcpy(char *dest, const char *src, size_t sz);
void	*ft_calloc(size_t n, size_t size);

#endif