/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astadnik <astadnik@student.unit.ua>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/23 15:23:50 by astadnik          #+#    #+#             */
/*   Updated: 2017/12/31 15:24:43 by astadnik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Searches for a node in a list, deletes it and sets it's previous's next
** pointer to it's next node. Now read it again and maybe u'll understand it)
*/

#include "libft.h"

static void	d(void *ptr, size_t size)
{
	if (size)
		free(ptr);
}

void		ft_lstdelnode(t_list **head, t_list *targ)
{
	if (!head || !*head || !targ)
		return ;
	if (*head == targ)
	{
		*head = targ->next;
		ft_lstdelone(&targ, d);
		return ;
	}
	while (*head)
	{
		if ((*head)->next == targ)
		{
			(*head)->next = targ->next;
			ft_lstdelone(&targ, d);
			return ;
		}
		head = &(*head)->next;
	}
}
