/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 16:44:29 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/13 16:44:30 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	bigger_first(t_dlist *list)
{
	t_node	*node;
	int		tmp;

	tmp = 0;
	node = list->head;
	while (node != NULL)
	{
		if (node->data >= tmp)
			tmp = node->data;
		node = node->next;
	}
	while (list->head->data != tmp)
		ra(list);
}

void		push_swap(t_dlist *l_a, t_dlist *l_b)
{
	while (l_a->head != NULL)
	{
		bigger_first(l_a);
		pb(l_a, l_b);
	}
	while (l_b->head != NULL)
		pa(l_a, l_b);
	print_list(l_a);
}
