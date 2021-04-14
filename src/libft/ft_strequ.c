/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/10 12:39:45 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 17:39:03 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Lexicographical comparison between s1 and s2. If the 2 strings are identical the function returns 1, or 0 otherwise.*/

int		ft_strequ(char const *s1, char const *s2)
{
	int		i;
	int		cpt1;
	int		cpt2;

	i = 0;
	cpt1 = 0;
	cpt2 = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[cpt1] != '\0')
		cpt1++;
	while (s2[cpt2] != '\0')
		cpt2++;
	if (cpt1 != cpt2)
		return (0);
	while ((s1[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (0);
	return (1);
}
