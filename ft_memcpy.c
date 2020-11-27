/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:23:09 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 14:56:19 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
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
		i++;
	}
	return (strdest);
}
