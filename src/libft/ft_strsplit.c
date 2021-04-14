/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 15:18:16 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/18 14:27:11 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) obtained by spliting s using the character c as a delimiter. If the allocation fails the function returns NULL. Example : ft_strsplit("*hello*fellow***students*", ’*’) returns the array ["hello", "fellow", "students"].*/

static int		tailletab(char const *s, char c)
{
	int		cpt;
	int		i;

	cpt = 0;
	i = 0;
	if (s[0] != 'c')
	{
		cpt = 1;
		i++;
	}
	else
		i++;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (s[i - 1] == c))
			cpt++;
		i++;
	}
	return (cpt);
}

static int		taillemot(char const *s, char c)
{
	int		i;
	int		cpt;

	i = 0;
	cpt = 0;
	while ((s[i] != c) && (s[i] != '\0'))
	{
		cpt++;
		i++;
	}
	return (cpt);
}

static char		*newstr(char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c)
		i++;
	s = s + i;
	return (s);
}

char			**ft_strsplit2(char *s, char c, int i, int j)
{
	char	**argv;

	if (!(argv = (char**)malloc(sizeof(char*) * (tailletab(s, c) + 1))))
		return (NULL);
	s = newstr(s, c);
	while (s[i] != '\0')
	{
		if (!(argv[j] = (char*)malloc(sizeof(char) * (taillemot(s, c) + 1))))
			return (NULL);
		while (s[i] != c && s[i] != '\0')
		{
			argv[j][i] = s[i];
			i++;
		}
		argv[j][i] = '\0';
		j++;
		s = newstr(s + i, c);
		i = 0;
	}
	argv[j] = NULL;
	return (argv);
}

char			**ft_strsplit(char const *tp, char c)
{
	char	**argv;
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!tp)
		return (NULL);
	s = (char*)tp;
	argv = ft_strsplit2(s, c, i, j);
	return (argv);
}
