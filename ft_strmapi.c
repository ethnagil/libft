/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 14:18:13 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/27 15:19:29 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*result;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if ((result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1))) != 0)
	{
		ft_strlcpy(result, s, ft_strlen(s));
		while (result[i])
		{
			result[i] = (*f)(i, result[i]);
			i++;
		}
		return (result);
	}
	return (0);
}
