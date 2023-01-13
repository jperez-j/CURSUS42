/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:09:43 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/12 21:11:13 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*first;

	if (lst == NULL || del == NULL)
		return ;
	first = *lst;
	while (first != NULL)
	{
		del(first->content);
		free(first);
		first = first->next;
	}
	*lst = NULL;
}
/*
// **lst es la lista como tal. Apunta al puntero de un struct.
// creamos first para decirle que será el puntero al primer struct de la lista, 
// puesto que por defecto, siempre será así.

// tras eso, y siempre que existan punteros a structs, 
// borraremos el contenido del
// // struct al que estemos apuntando, y lo liberaremos.
// // Después, haremos que first (el puntero al struct), 
// apunte al siguiente struct.
// Al terminar, el último puntero apuntará a NULL.
*/