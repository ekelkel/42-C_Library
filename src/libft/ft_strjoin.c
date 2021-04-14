/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:06:20 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 17:43:53 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’, result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.*/

static int		addtaille(char const *s1, char const *s2)
{
	int		cpt1;
	int		cpt2;

	cpt1 = 0;
	cpt2 = 0;
	while (s1[cpt1] != '\0')
		cpt1++;
	while (s2[cpt2] != '\0')
		cpt2++;
	return (cpt1 + cpt2);
}

char			*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	int		cpt1;
	int		cpt2;

	cpt1 = 0;
	cpt2 = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(fresh = (char*)malloc(sizeof(char) * (addtaille(s1, s2) + 1))))
		return (0);
	while (s1[cpt1] != '\0')
	{
		fresh[cpt1] = s1[cpt1];
		cpt1++;
	}
	while (s2[cpt2] != '\0')
	{
		fresh[cpt1] = s2[cpt2];
		cpt1++;
		cpt2++;
	}
	fresh[cpt1] = '\0';
	return (fresh);
}
