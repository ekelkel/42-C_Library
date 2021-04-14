/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:29:30 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/16 15:35:57 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the string s to the file descriptor fd.*/

void		ft_putstr_fd(char const *s, int fd)
{
	int		cpt;

	cpt = 0;
	if (!s)
		return ;
	while (s[cpt] != '\0')
		cpt++;
	write(fd, s, cpt);
}
