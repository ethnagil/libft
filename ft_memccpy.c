/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:26:09 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 14:57:35 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*strdest;
	char	*strsrc;

	strdest = (char*)dest;
	strsrc = (char*)src;
	i = 0;
	while ((i < n) && (strsrc[i - 1] != c))
	{
		strdest[i] = strsrc[i];
		i++;
	}
	if (strsrc[i - 1] == c)
		return (strdest + i);
	else
		return (0);
}
