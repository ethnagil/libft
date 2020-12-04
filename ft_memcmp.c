/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:32:49 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/03 11:49:20 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*strs1;
	unsigned char	*strs2;

	if (!s1 || !s2)
		return (0);
	strs1 = (unsigned char*)s1;
	strs2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (strs1[i] != strs2[i])
			return (strs1[i] - strs2[i]);
		i++;
	}
	return (0);
}
