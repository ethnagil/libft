/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:54:42 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/03 09:42:28 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	if ((str = (char *)malloc(size * (count))) != 0)
	{
		i = 0;
		while (i < count * size)
		{
			str[i] = 0;
			i++;
		}
		return (str);
	}
	return (0);
}
