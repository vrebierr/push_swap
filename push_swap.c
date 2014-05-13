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

static void	smallest_first(t_dlist *list)
{
	t_node	*node;
	int		tmp;

	tmp = list->head->data;
	node = list->head;
	while (node != NULL)
	{
		if (node->data < tmp)
			tmp = node->data;
		node = node->next;
	}
	while (list->head->data != tmp)
	{
		ra(list);
		ft_putchar(' ');
	}
}

int			is_sort(t_dlist *list)
{
	t_node	*node;

	node = list->head;
	if (list->head->data == list->tail->data)
		return (1);
	while (node->next != NULL)
	{
		if (node->data > node->next->data)
			return (0);
		node = node->next;
	}
	return (1);
}

void		push_swap(t_dlist *l_a, t_dlist *l_b)
{
	if (is_sort(l_a))
		return ;
	while (l_a->head != NULL)
	{
		smallest_first(l_a);
		pb(l_a, l_b);
		ft_putchar(' ');
	}
	while (l_b->head != NULL)
	{
		if (l_b->head->next == NULL)
		{
			pa(l_a, l_b);
			ft_putchar('\n');
		}
		else
		{
			pa(l_a, l_b);
			ft_putchar(' ');
		}
	}
}
