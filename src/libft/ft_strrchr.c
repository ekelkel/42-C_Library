/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:22:39 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 13:26:54 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_size(const char *s)
{
	int		cpt;

	cpt = 0;
	while (s[cpt] != '\0')
		cpt++;
	return (cpt);
}

char			*ft_strrchr(const char *s, int c)
{
	int		cpt;

	cpt = ft_size(s);
	while (cpt >= 0)
	{
		if (s[cpt] == c)
			return (((char*)s + cpt));
		cpt--;
	}
	return (0);
}
