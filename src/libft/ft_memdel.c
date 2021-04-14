/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:44:03 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/09 18:18:13 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Takes as a parameter the address of a memory area that needs to be freed with free(3), then puts the pointer to NULL.*/

void	ft_memdel(void **ap)
{
	if (!ap)
		return ;
	free(*ap);
	*ap = 0;
}
