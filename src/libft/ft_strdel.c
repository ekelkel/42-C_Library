/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:59:37 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/09 18:17:55 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Takes as a parameter the address of a string that need to be freed with free(3), then sets its pointer to NULL.*/

void	ft_strdel(char **as)
{
	if (!as)
		return ;
	free(*as);
	*as = 0;
}
