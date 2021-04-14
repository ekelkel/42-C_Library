/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 12:30:28 by ekelkel           #+#    #+#             */
/*   Updated: 2019/09/10 17:51:14 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsorted(t_list *lst, long (*cmp)())
{
	if (!lst)
		return (1);
	while (lst->next)
	{
		if (cmp(lst->content, lst->next->content) > 0)
			return (0);
		lst = lst->next;
	}
	return (1);
}
