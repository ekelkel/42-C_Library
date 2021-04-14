/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:44:14 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/17 15:49:55 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		size;
	int		cpt;
	char	tmp;

	cpt = 0;
	size = ft_strlen(str) - 1;
	while (size >= cpt)
	{
		tmp = str[cpt];
		str[cpt] = str[size];
		str[size] = tmp;
		cpt++;
		size--;
	}
	return (str);
}
