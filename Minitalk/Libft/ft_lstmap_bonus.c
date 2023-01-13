/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jperez-j <jperez-j@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:45:08 by jperez-j          #+#    #+#             */
/*   Updated: 2022/10/11 19:47:39 by jperez-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*newlist;

	if (lst != NULL)
	{
		start = ft_lstnew(f(lst->content));
		if (start == NULL)
			return (NULL);
		lst = lst->next;
		while (lst != NULL)
		{	
			newlist = ft_lstnew(f(lst->content));
			if (newlist == NULL)
			{
				ft_lstclear(&start, del);
				return (NULL);
			}
			ft_lstadd_back(&start, newlist);
			lst = lst->next;
		}
		return (start);
	}
	return (NULL);
}
