/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:24:29 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/07 11:31:49 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(long int n2)
{
	int	i;

	if (n2 < 0)
	{
		i = 2;
		n2 = n2 * -1;
	}
	else
		i = 1;
	while ((n2) > 9)
	{
		n2 = n2 / 10;
		i++;
	}
	return (i);
}

int		ft_convertnbr(long int nbr, char *alpha, long int sign)
{
	int i;

	if (sign < 0)
	{
		i = 1;
		alpha[0] = '-';
	}
	else
		i = 0;
	if (nbr > 9)
		i = ft_convertnbr(nbr / 10, alpha, sign);
	alpha[i] = (nbr % 10) + 48;
	i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char		*alpha;
	int			len;
	int			i;
	long int	sign;

	len = ft_intlen((long int)n);
	if ((alpha = (char *)malloc(sizeof(char) * (len + 1))) != 0)
	{
		if (n < 0)
			sign = -1;
		else
			sign = 1;
		i = ft_convertnbr((long int)n * sign, alpha, sign);
		alpha[i] = '\0';
		return (alpha);
	}
	return (0);
}
