/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 11:23:00 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 18:11:27 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Takes as a parameter the adress of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to NULL.*/

void	ft_lstdel(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*current;
	t_list	*next;

	if (!alst)
		return ;
	current = *alst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(&current, del);
		current = next;
	}
	*alst = NULL;
}
