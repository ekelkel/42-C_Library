/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 15:22:22 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 13:30:02 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_lens(char *s, size_t size)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && i < size)
		i++;
	return (i);
}

static size_t		ft_len(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t				ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		n;
	size_t		cpt;
	size_t		i;
	size_t		len;

	cpt = ft_lens(dest, size);
	len = ft_len(dest);
	i = 0;
	if (size > len + 1)
		n = size - len - 1;
	else
		return (cpt + ft_len((char*)src));
	while (src[i] != '\0' && i < n)
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (cpt + ft_len((char*)src));
}
