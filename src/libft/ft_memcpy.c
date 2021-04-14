/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:27:05 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/09 14:21:38 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			cpt;

	cpt = 0;
	while (cpt < n)
	{
		((char*)dest)[cpt] = ((char*)src)[cpt];
		cpt++;
	}
	return (dest);
}
