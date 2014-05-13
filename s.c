/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 15:13:36 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/13 15:13:38 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		verif(t_dlist *list)
{
	if (list == NULL || list->head == NULL || list->head->next == NULL)
		return (0);
	return (1);
}

static void		s(t_dlist *list)
{
	t_node	*node;

	node = list->head;
	list->head = node->next;
	list->head->prev = NULL;
	node->prev = list->head;
	node->next = list->head->next;
	list->head->next = node;
	node->next->prev = node;
}

void			sa(t_dlist *list)
{
	if (verif(list))
	{
		s(list);
		ft_putstr("sa");
	}
}

void			sb(t_dlist *list)
{
	if (verif(list))
	{
		s(list);
		ft_putstr("sb");
	}
}

void			ss(t_dlist *l_a, t_dlist *l_b)
{
	if (verif(l_a) && verif(l_b))
	{
		s(l_a);
		s(l_b);
		ft_putstr("ss");
	}
}
