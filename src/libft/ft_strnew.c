/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekelkel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:52:09 by ekelkel           #+#    #+#             */
/*   Updated: 2019/04/09 17:58:25 by ekelkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. Each character of the string is initialized at ’\0’. If the allocation fails the function returns NULL.*/

char	*ft_strnew(size_t size)
{
	char	*ptr;

	if (!(ptr = (char*)malloc(sizeof(char) * (size + 1))))
		return (0);
	ptr[size] = '\0';
	ft_bzero(ptr, size);
	return (ptr);
}
