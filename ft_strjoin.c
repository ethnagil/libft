/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:43:17 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/26 12:10:55 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = ft_strlen(s1) + ft_strlen(s2);
	if ((s3 = (char *)malloc(sizeof(char) * (i + 1))) != 0)
	{
		i = 0;
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
		{
			s3[i] = s2[j];
			i++;
			j++;
		}
		s3[i] = '\0';
		return (s3);
	}
	return (0);
}
