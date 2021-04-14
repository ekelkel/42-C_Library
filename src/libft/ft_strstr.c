/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:31:32 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 13:25:10 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_same(const char *str, const char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i] != '\0')
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char			*ft_strstr(const char *str, const char *to_find)
{
	int		i;

	i = 0;
	if (to_find[i] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		if (ft_same(str + i, to_find) == 1)
			return ((char*)str + i);
		i++;
	}
	return (0);
}
