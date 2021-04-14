/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:27:37 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 13:38:54 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the integer n to the standard output.*/

void	ft_putnbr(int n)
{
	long	calc;
	int		len;
	long	longch;

	len = 1;
	longch = n;
	calc = n;
	if (n < 0)
	{
		ft_putchar('-');
		longch = -(longch);
		calc = -(calc);
	}
	while ((calc = calc / 10) > 0)
		len = len * 10;
	while (len != 0)
	{
		ft_putchar((longch / len) + 48);
		longch = (longch % len);
		len = len / 10;
	}
}
