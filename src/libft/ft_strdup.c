/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:55:04 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/18 14:11:02 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		i;
	int		cpt;

	cpt = 0;
	i = 0;
	while (s[cpt] != '\0')
		cpt++;
	if (!(d = (char*)malloc(sizeof(*d) * (cpt + 1))))
		return (NULL);
	if (d == '\0')
		return (0);
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
