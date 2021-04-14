/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nblenbase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 15:14:35 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/19 11:49:37 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_nblenbase(long value, int base)
{
	int		j;
	long	calc;

	j = 0;
	if (value < 0)
		calc = -value;
	else
		calc = value;
	if (calc == 0)
		return (1);
	while (calc > 0)
	{
		j++;
		calc = calc / base;
	}
	return (j);
}
