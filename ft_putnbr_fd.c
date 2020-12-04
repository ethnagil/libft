/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 16:00:36 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/02 18:04:46 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_writenbr(unsigned int nbr, int fd)
{
	if (nbr > 9)
		ft_writenbr(nbr / 10, fd);
	ft_putchar_fd(((nbr % 10) + 48), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	n1;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n1 = n * -1;
	}
	else
		n1 = n;
	ft_writenbr(n1, fd);
}
