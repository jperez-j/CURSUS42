/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:49:57 by jperez-j          #+#    #+#             */
/*   Updated: 2022/11/12 15:52:17 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = malloc(n * size);
	if (mem == NULL)
		return (0);
	while (i < n * size)
	{
		mem[i] = '\0';
		i++;
	}
	return (mem);
}

char	*ft_read(int fd, char *buffer)
{
	char	*aux;
	int		i;
	int		j;

	i = 1;
	aux = ft_calloc((BUFFER_SIZE + 1), sizeof (char));
	if (aux == NULL)
		return (free(buffer), NULL);
	while ((!ft_strchr(buffer, '\n')) && i != 0)
	{
		j = 0;
		while (aux[j])
			aux[j++] = 0;
		i = read(fd, aux, BUFFER_SIZE);
		if (i == -1)
		{
			return (free(aux), free(buffer), NULL);
		}	
		if (i == 0)
			return (free(aux), buffer);
		buffer = ft_strjoin(buffer, aux);
		if (buffer == NULL)
			return (free(aux), NULL);
	}
	return (free(aux), buffer);
}

char	*ft_get_line(char *save)
{
	int				i;
	char			*line;

	i = 0;
	if (!save[i])
		return (NULL);
	while (save[i] != '\0' && save[i] != '\n')
		i++;
	line = ft_calloc((i + 2), sizeof (char));
	if (line == NULL)
		return (NULL);
	ft_strlcpy(line, save, (i + 2));
	return (line);
}

char	*ft_get_extra(char *save)
{
	int		i;
	int		j;
	char	*extra;

	i = 0;
	j = 0;
	if (!save)
		return (NULL);
	if (!ft_strchr(save, '\n'))
		return (free(save), NULL);
	while (save[i] != '\n')
		i++;
	i++;
	extra = ft_calloc (((ft_strlen(save) + 1) - i), sizeof (char));
	while (save[i] != '\0')
	{
		extra[j] = save[i];
		i++;
		j++;
	}
	free(save);
	if (ft_strlen(extra) == 0)
		return (free(extra), NULL);
	return (extra);
}

char	*get_next_line(int fd)
{
	char			*line;
	static char		*save[1024];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (save[fd] == NULL)
	{
		save[fd] = ft_calloc((BUFFER_SIZE + 1), sizeof (char));
		if (save[fd] == NULL)
			return (NULL);
	}
	save[fd] = ft_read(fd, save[fd]);
	if (save[fd] == NULL)
		return (NULL);
	line = ft_get_line(save[fd]);
	save[fd] = ft_get_extra(save[fd]);
	return (line);
}
