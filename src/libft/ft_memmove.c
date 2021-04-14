/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 16:56:23 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 16:02:59 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	size_t			i;

	i = 0;
	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dest;
	if (csrc < cdst)
		while ((int)(--n) >= 0)
			*(cdst + n) = *(csrc + n);
	else
		while (i < n)
		{
			*(cdst + i) = *(csrc + i);
			i++;
		}
	return (dest);
}
