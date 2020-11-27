/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:49:19 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 14:58:09 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*strdest;
	char	*strsrc;
	char	temp[n];

	strdest = (char*)dest;
	strsrc = (char*)src;
	i = 0;
	while (i < n)
	{
		temp[i] = strsrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		strdest[i] = temp[i];
		i++;
	}
	return (strdest);
}
