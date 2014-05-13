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

t_dlist		*list_append(t_dlist *list, int value)
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

t_dlist		*list_prepend(t_dlist *list, int value)
{
	t_node	*node;

	if (list != NULL)
	{
		node = (t_node *)malloc(sizeof(t_node));
		if (node != NULL)
		{
			node->data = value;
			node->prev = NULL;
			if (list->head == NULL)
			{
				node->next = NULL;
				list->head = node;
				list->tail = node;
			}
			else
			{
				list->head->prev = node;
				node->next = list->head;
				list->head = node;
			}
			list->len++;
		}
	}
	return (list);
}

t_dlist		*list_del(t_dlist *list, t_node *node)
{
	if (list != NULL)
	{
		if (node->prev == NULL)
		{
			list->head = node->next;
			list->head->prev = NULL;
		}
		else if (node->next == NULL)
		{
			list->tail = node->prev;
			list->tail->next = NULL;
		}
		else
		{
			node->prev->next = node->next;
			node->next->prev = node->prev;
		}
		free(node);
		node = NULL;
		list->len--;
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
