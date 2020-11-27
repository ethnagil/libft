/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:24:47 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/27 10:36:22 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_cut(char c1, char c)
{
	if (c1 == c)
		return (1);
	else
		return (0);
}

int		ft_nblines(char const *s, char c)
{
	int i;
	int nblines;

	nblines = 0;
	i = 0;
	while (s[i])
	{
		if (ft_cut(s[i], c))
		{
			nblines++;
		}
		i++;
	}
	return (nblines);
}

void	ft_cutstr(int *i, int *j, char const *s, char c)
{
	int	i2;
	int j2;

	i2 = *i;
	j2 = 0;
	while (ft_cut(s[i2], c) != 1)
	{
		j2++;
		i2++;
	}
	*i = i2;
	*j = j2;
}

char	**ft_split(char const *s, char c)
{
	char	**ss;
	int		lines;
	int		i;
	int		j;

	lines = ft_nblines(s, c);
	if ((ss = (char **)malloc(sizeof(char *) * (lines + 2))) != 0)
	{
		i = 0;
		j = 0;
		lines = 0;
		while (s[i])
		{
			ft_cutstr(&i, &j, s, c);
			if (j > 0)
			{
				ss[lines] = ft_substr((char const *)s, i - j, j);
				lines++;
			}
			i++;
		}
		ss[lines] = ft_calloc(10, (sizeof(char)));
		return (ss);
	}
	return (0);
}
