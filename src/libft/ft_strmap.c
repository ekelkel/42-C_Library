/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:02:04 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/10 12:20:55 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Applies the function f to each character of the string given as argument to create a “fresh” new string (with malloc(3)) resulting from the successive applications of f.*/

char	*ft_strmap(char const *s, char (*f) (char))
{
	int		cpt;
	char	*fresh;

	cpt = 0;
	if (!s)
		return (0);
	while (s[cpt] != '\0')
		cpt++;
	if (!(fresh = (char*)malloc(sizeof(char) * (cpt + 1))))
		return (0);
	cpt = 0;
	while (s[cpt] != '\0')
	{
		fresh[cpt] = f(s[cpt]);
		cpt++;
	}
	fresh[cpt] = '\0';
	return (fresh);
}
