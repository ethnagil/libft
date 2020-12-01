/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:32:49 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/01 17:36:19 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*strs1;
	unsigned char	*strs2;

	if (n == 0)
		return (0);
	strs1 = (unsigned char*)s1;
	strs2 = (unsigned char*)s2;
	i = 0;
	while ((i < n) && (strs1[i]) && (strs2[i])
			&& (strs1[i] == strs2[i]))
		i++;
	if ((strs1[i] != strs2[i]) && (i < n))
	{
		if (((strs1[i] - strs2[i]) + (strs1[i] - strs2[i])) < 0)
			return (-1);
		else
			return (1);
	}
	else
		return (0);
}
