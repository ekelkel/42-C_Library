/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:41:58 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/16 17:10:12 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_comp(const char *dest, const char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (dest[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	cpt;
	char	*temp;

	if (ft_strcmp(little, "") == 0)
		return ((char*)big);
	if (len == 0)
		return (NULL);
	if (!(temp = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	cpt = 0;
	while (cpt < len)
	{
		temp[cpt] = big[cpt];
		cpt++;
	}
	temp[cpt] = '\0';
	cpt = 0;
	while (temp[cpt] != '\0')
	{
		if (ft_comp(temp + cpt, little) == 1)
			return ((char*)big + cpt);
		cpt++;
	}
	return (0);
}
