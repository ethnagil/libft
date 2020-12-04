/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egillesp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 10:42:16 by egillesp          #+#    #+#             */
/*   Updated: 2020/12/02 12:46:17 by egillesp         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lstelem;

	if ((lstelem = malloc(sizeof(t_list))) != 0)
	{
		lstelem->content = content;
		lstelem->next = 0;
		return (lstelem);
	}
	return (0);
}
