/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 16:43:29 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/17 16:47:23 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Calculates the length of the list.*/

int			ft_lstlen(t_list *list)
{
	int		cpt;

	cpt = 0;
	while (list)
	{
		cpt++;
		list = list->next;
	}
	return (cpt);
}
