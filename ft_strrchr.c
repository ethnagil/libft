/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:05:03 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/24 15:17:45 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*strsrc;
	char	cc;

	strsrc = (char*)s;
	cc = (char)c;
	i = 0;
	while (strsrc[i])
		i++;
	while ((i >= 0) && (strsrc[i] != cc))
		i--;
	if (strsrc[i] == cc)
		return (strsrc + i);
	else
		return (0);
}
