/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:36:02 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/09 12:47:57 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char		*str;
	size_t			i;

	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == (const char)c)
			return ((char*)s + i);
		else
			i++;
	}
	return (0);
}
