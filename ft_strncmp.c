/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:19:19 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 15:44:25 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		size_s1;
	int		size_s2;

	i = 0;
	size_s1 = 0;
	while (s1[i++] && (i < n))
		size_s1 += s1[i];
	i = 0;
	size_s2 = 0;
	while (s2[i++] && (i < n))
		size_s2 += s2[i];
	if (size_s1 < size_s2)
		return (-1);
	else if (size_s1 > size_s2)
		return (1);
	else
		return (0);
}
