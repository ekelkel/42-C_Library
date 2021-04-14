/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:51:14 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 13:38:03 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the integer n to the file descriptor fd.*/

void	ft_putnbr_fd(int n, int fd)
{
	long	calc;
	int		len;
	long	longch;

	len = 1;
	longch = n;
	calc = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		longch = -(longch);
		calc = -(calc);
	}
	while ((calc = calc / 10) > 0)
		len = len * 10;
	while (len != 0)
	{
		ft_putchar_fd((longch / len) + 48, fd);
		longch = (longch % len);
		len = len / 10;
	}
}
