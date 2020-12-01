/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:05:44 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/01 17:37:30 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, char c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char*)s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
