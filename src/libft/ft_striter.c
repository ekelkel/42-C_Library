/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 18:33:13 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/15 17:45:10 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.*/

void	ft_striter(char *s, void (*f) (char*))
{
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(&(s[i]));
		i++;
	}
}
