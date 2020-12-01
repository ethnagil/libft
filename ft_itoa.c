/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 17:24:29 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/01 17:35:02 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_convertnbr(long int nbr, char *alpha, int sign)
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
	long int	n1;
	int			i;
	long int	sign;

	if ((alpha = (char *)malloc(sizeof(char) * 12)) != 0)
	{
		if (n < 0)
			sign = -1;
		else
			sign = 1;
		n1 = n * sign;
		i = ft_convertnbr(n1, alpha, sign);
		alpha[i] = '\0';
		return (alpha);
	}
	return (0);
}
