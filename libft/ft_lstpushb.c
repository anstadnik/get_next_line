/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 14:20:09 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/23 15:23:32 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adds a new element of t_list type at the end of the list.
*/

#include "libft.h"

void	ft_lstpushb(t_list **list, void *content, size_t content_size)
{
	t_list	*new;

	if (!list || !(new = ft_lstnew(content, content_size)))
	{
		ft_putendl_fd("I am ft_lstpushb, and I got into a trouble", 2);
		return ;
	}
	while (*list)
		list = &((*list)->next);
	*list = new;
}
