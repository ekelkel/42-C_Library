/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:12:56 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 10:35:22 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Iterates a list lst and applies the function f to each link to
create a “fresh” list (using malloc(3)) resulting from the successive applications of f. If the allocation fails, the function returns NULL.*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem))
{
	t_list	*newlst;
	t_list	*elem;
	t_list	*first;

	if (!lst)
		return (NULL);
	elem = f(lst);
	if (!(newlst = ft_lstnew(elem->content, elem->content_size)))
		return (NULL);
	lst = lst->next;
	first = newlst;
	while (lst)
	{
		elem = f(lst);
		if (!(newlst->next = ft_lstnew(elem->content, elem->content_size)))
			return (NULL);
		newlst = newlst->next;
		lst = lst->next;
	}
	return (first);
}
