/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 18:52:31 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/09 13:08:51 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*scr1;
	const unsigned char	*scr2;
	size_t				i;
	int					res;

	scr1 = s1;
	scr2 = s2;
	i = 0;
	res = 0;
	while (i < n)
	{
		if (scr1[i] != scr2[i])
		{
			res = scr1[i] - scr2[i];
			return (res);
		}
		i++;
	}
	return (0);
}
