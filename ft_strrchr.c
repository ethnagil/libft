/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:05:03 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/01 15:13:18 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*strsrc;
	char	cc;

	strsrc = (char*)s;
	cc = (char)c;
	i = ft_strlen(strsrc);
	while (i >= 0)
	{
		if (strsrc[i] == cc)
			return (strsrc + i);
		i--;
	}
	return (0);
}
