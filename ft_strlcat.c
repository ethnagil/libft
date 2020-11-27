/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 16:37:55 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/25 11:33:58 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	cat_size;

	if (size == 0)
		return (0);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j])
		j++;
	cat_size = i + j;
	if (i >= size)
		return (size + j);
	j = 0;
	while ((src[j]) && (i < size - 1) && (i < cat_size))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (cat_size);
}
