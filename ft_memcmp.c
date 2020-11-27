/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 10:32:49 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 14:53:12 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*strs1;
	unsigned char	*strs2;

	if (n == 0)
		return (0);
	strs1 = (unsigned char*)s1;
	strs2 = (unsigned char*)s2;
	i = 1;
	while ((i < n) && (strs1[i]) && (strs1[i - 1] == strs2[i - 1]))
		i++;
	if (strs1[i - 1] != strs2[i - 1])
		if (((strs1[i] - strs2[i]) + (strs1[i - 1] - strs2[i - 1])) < 0)
			return (-1);
		else
			return (1);
	else
		return (0);
}
