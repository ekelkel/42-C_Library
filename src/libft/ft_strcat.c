/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 11:47:28 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/08 14:10:13 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, const char *src)
{
	int		cpt;
	int		i;

	cpt = 0;
	i = 0;
	while (dest[cpt] != '\0')
		cpt++;
	while (src[i] != '\0')
	{
		dest[cpt] = src[i];
		cpt++;
		i++;
	}
	dest[cpt] = '\0';
	return (dest);
}
