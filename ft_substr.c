/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:06:51 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/04 19:32:33 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (start > ft_strlen(s))
		len = 0;
	if ((subs = (char *)malloc(sizeof(char) * (len + 1))) != 0)
	{
		i = 0;
		while ((i < len) && (s[i + start]) && (start < ft_strlen(s)))
		{
			subs[i] = s[i + start];
			i++;
		}
		subs[i] = 0;
		return (subs);
	}
	return (0);
}
