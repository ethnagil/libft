/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:26:09 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/01 17:35:48 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*strdest;
	char	*strsrc;

	strdest = (char*)dest;
	strsrc = (char*)src;
	i = 0;
	while (i < n)
	{
		strdest[i] = strsrc[i];
		if (strsrc[i] == c)
			return (strdest + i + 1);
		i++;
	}
	return (NULL);
}
