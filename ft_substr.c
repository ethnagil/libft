/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:06:51 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/25 17:42:59 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if ((subs = (char *)malloc(sizeof(char) * len)) != 0)
	{
		i = 0;
		while ((i < len) && (s[i + start]))
		{
			subs[i] = s[i + start];
			i++;
		}
		subs[i] = '\0';
		return (subs);
	}
	return (0);
}
