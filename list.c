/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 16:56:43 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/12 16:56:43 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_dlist		*list_new(void)
{
	t_dlist	*result;

	result = (t_dlist *)malloc(sizeof(t_dlist));
	if (result != NULL)
	{
		result->len = 0;
		result->head = NULL;
		result->tail = NULL;
	}
	return (result);
}

t_dlist		*list_add(t_dlist *list, int value)
{
	t_node	*node;

	if (list != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = value;
			node->next = NULL;
			if (list->tail == NULL)
			{
				node->prev = NULL;
				list->head = node;
				list->tail = node;
			}
			else
			{
				node->prev = list->tail;
				list->tail->next = node;
				list->tail = node;
			}
			list->len++;
		}
	}
	return (list);
}

void		print_list(t_dlist *list)
{
	t_node	*tmp;

	if (list != NULL)
	{
		tmp = list->head;
		while (tmp != NULL)
		{
			ft_putnbr(tmp->data);
			ft_putstr(" > ");
			tmp = tmp->next;
		}
	}
	ft_putstr("NULL\n");
}
