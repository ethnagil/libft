/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:43:18 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/04 14:19:56 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_trim(char c1, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	int		j;
	char	*s2;

	len = ft_strlen(s1);
	i = 0;
	while ((s1[i]) && (ft_trim(s1[i], set)))
		i++;
	while (s1[i] && (len > 0) && (ft_trim(s1[len - 1], set)))
		len--;
	if ((s2 = (char *)malloc(sizeof(char) * ((len - i) + 1))) != 0)
	{
		j = 0;
		while (i < len)
		{
			s2[j] = s1[i];
			i++;
			j++;
		}
		s2[j] = 0;
		return (s2);
	}
	return (0);
}
