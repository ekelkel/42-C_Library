/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend  .c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:30:28 by ekelkel           #+#    #+#             */
/*   Updated: 2019/09/10 17:51:14 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!lst)
		return ;
	if (*lst)
	{
		list = *lst;
		while (list->next != NULL)
			list = list->next;
		list->next = new;
	}
	else
		*lst = new;
}
