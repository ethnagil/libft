/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 10:17:11 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/01 17:38:39 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hayst, const char *need, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	h = (char*)hayst;
	n = (char*)need;
	if (!n[0])
		return (h);
	i = 0;
	while ((h[i]) && (i < len))
	{
		j = 0;
		while ((n[j]) && (h[i] == n[j]) && (i < len))
		{
			j++;
			i++;
		}
		if (n[j])
			i = i - j;
		else
			return (h + i - j);
		i++;
	}
	return (0);
}
