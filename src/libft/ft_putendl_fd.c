/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 14:37:40 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/16 15:35:28 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Outputs the string s followed by a newline to the file descriptor fd.*/

void		ft_putendl_fd(char const *s, int fd)
{
	int		cpt;

	cpt = 0;
	if (!s)
		return ;
	while (s[cpt] != '\0')
	{
		write(fd, &s[cpt], 1);
		cpt++;
	}
	write(fd, "\n", 1);
}
