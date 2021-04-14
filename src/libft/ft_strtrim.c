/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 14:18:40 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/16 15:25:28 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces at the beginning or at the end, the function returns a copy of s. If the allocation fails the function returns NULL.*/

static int		calc(int ind, char const *s)
{
	while (s[ind] != '\0' && (s[ind] == ' ' ||
				s[ind] == '\n' || s[ind] == '\t'))
		ind++;
	return (ind);
}

static int		changecpt(char const *s, int cpt)
{
	if (cpt > 0)
		cpt--;
	while (cpt > 0 && (s[cpt] == ' ' || s[cpt] == '\n' || s[cpt] == '\t'))
		cpt--;
	return (cpt);
}

static char		*emptystr(void)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(char))))
		return (NULL);
	ft_strcpy(str, "");
	return (str);
}

char			*ft_strtrim(char const *s)
{
	int		cpt;
	int		ind;
	int		ind2;
	char	*fresh;

	ind = 0;
	ind2 = 0;
	if (!s)
		return (NULL);
	cpt = ft_strlen(s);
	ind = calc(ind, s);
	if (ind == cpt)
		return (emptystr());
	cpt = changecpt(s, cpt);
	if (!(fresh = (char*)malloc(sizeof(char) * (cpt - ind + 2))))
		return (NULL);
	while (ind <= cpt)
	{
		fresh[ind2] = s[ind];
		ind2++;
		ind++;
	}
	fresh[ind2] = '\0';
	return (fresh);
}
