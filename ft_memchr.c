/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 09:57:50 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 15:01:16 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*strsrc;
	unsigned char	cc;

	strsrc = (unsigned char*)s;
	cc = (unsigned char)c;
	i = 0;
	while ((i < n) && (strsrc[i]) && (strsrc[i - 1] != cc))
	{
		i++;
	}
	if (strsrc[i - 1] == c)
		return (strsrc + i - 1);
	else
		return (0);
}
