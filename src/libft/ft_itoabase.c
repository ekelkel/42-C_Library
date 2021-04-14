/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:43:10 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/18 12:44:13 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocate (with malloc(3)) and returns a “fresh” string ending with ’\0’ representing the integer n given as argument using specified base. Negative numbers must be supported. If the allocation fails, the function returns NULL. For instance, if base is 2, then it will convert the integer into its binary compatible string or if base is 16, then it will create hexadecimal converted string form of integer number.*/

static int		ft_sign(long value)
{
	int sign;

	sign = 1;
	if (value < 0)
		sign = -1;
	return (sign);
}

char			*ft_itoabase(long value, int base)
{
	char	*str;
	int		len;
	int		sign;
	long	tmp;
	int		i;

	sign = ft_sign(value);
	if (sign == -1)
		value = -value;
	tmp = value;
	len = ft_nblenbase(value, base);
	i = ((sign == -1) ? 2 : 1);
	if (!(str = (char*)malloc(sizeof(char) * (len + i))))
		return (NULL);
	str[len + i - 1] = '\0';
	len = len + i - 2;
	while (((sign == -1) ? 1 : 0) <= len)
	{
		str[len] = value % base + (value % base > 9 ? 'A' - 10 : '0');
		value = value / base;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
