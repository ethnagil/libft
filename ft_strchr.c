/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:11:53 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 14:43:05 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*strsrc;
	char	cc;

	strsrc = (char*)s;
	cc = (char)c;
	i = 0;
	while ((strsrc[i]) && (strsrc[i] != cc))
	{
		i++;
	}
	if (strsrc[i] == cc)
		return (strsrc + i);
	else
		return (0);
}
