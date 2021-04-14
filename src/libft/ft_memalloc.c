/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:14:32 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/09 17:41:47 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a “fresh” memory area. 
The memory allocated is initialized to 0. 
If the allocation fails, the function returns NULL.*/

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (!(mem = (void*)malloc(sizeof(void) * size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
