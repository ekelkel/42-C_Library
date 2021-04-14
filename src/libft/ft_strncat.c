/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:12:09 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/08 17:12:02 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	int			cpt;
	size_t		cpt2;

	cpt = 0;
	cpt2 = 0;
	while (dest[cpt] != '\0')
		cpt++;
	while ((src[cpt2] != '\0') && (cpt2 < n))
	{
		dest[cpt] = src[cpt2];
		cpt++;
		cpt2++;
	}
	dest[cpt] = '\0';
	return (dest);
}
