/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:50:08 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 16:37:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (0);
	i = 0;
	while (src[i])
	{
		if (i < size - 1)
			dst[i] = src[i];
		else
			dst[i] = '\0';
		i++;
	}
	return (i);
}
