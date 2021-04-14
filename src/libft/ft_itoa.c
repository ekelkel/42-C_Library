/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 18:06:39 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 13:34:03 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n given as argument. Negative numbers must be supported. If the allocation fails, the function returns NULL.*/

static int			sizestr(int n)
{
	int		cpt;
	long	tmp;

	cpt = 0;
	tmp = (long)n;
	if ((long)n < 0)
	{
		cpt++;
		tmp = -(long)n;
	}
	if (n == 0)
		cpt = 1;
	while (tmp > 0)
	{
		cpt++;
		tmp = tmp / 10;
	}
	return (cpt);
}

static char			*first(char *str, long n)
{
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	return (str);
}

char				*ft_itoa(int tmp)
{
	char	*str;
	int		cpt;
	int		index;
	long	n;

	n = (long)tmp;
	index = 0;
	cpt = sizestr(n);
	if (!(str = (char*)malloc(sizeof(char) * (cpt + 1))))
		return (NULL);
	str[cpt] = '\0';
	cpt--;
	str = first(str, n);
	if (n < 0)
	{
		index = 1;
		n = -n;
	}
	while ((cpt >= index) && (n > 0))
	{
		str[cpt] = n % 10 + 48;
		cpt--;
		n = n / 10;
	}
	return (str);
}
