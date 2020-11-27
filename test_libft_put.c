/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft_put.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 16:48:46 by egillesp          #+#    #+#             */
/*   Updated: 2020/11/27 17:28:07 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int test(int n, int fd)
{
	char *alpha;

	ft_putnbr_fd(n, fd);
	ft_putchar_fd('\n', 1);
	return (0);
}


int main()
{
    ft_putendl_fd("Test: ft_putchar_fd(char c, int fd) - 'a' to stdout",1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putendl_fd("Test: ft_putstr_fd(char *s, int fd) - 'hello' to stdout",1);
	ft_putstr_fd("hello", 1);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Test: ft_putendl_fd(char *s, int fd) - 'hello''\\n' to stdout",1);
	ft_putendl_fd("hello", 1);
	ft_putchar_fd('\n', 1);

	ft_putendl_fd("Test: ft_putnbr_fd(char *s, int fd) - numbers to stdout",1);

	test(-12345678, 1);
	test(999,1);
	test(1,1);
	test(-1,1);
	test(0, 1);
	test(-2147483648, 1);
	test(2147483647, 1);
	return (0);
}
