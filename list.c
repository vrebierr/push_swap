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

t_list		*list_new(int value)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(t_list));
	if (result != NULL)
	{
		result->value = value;
		result->prev = NULL;
		result->next = NULL;
	}
	return (result);
}

t_list		*list_add(t_list *list, int value)
{
	if (list == NULL)
		return (list_new(value));
	while (list->next)
		list = list->next;
	list->next = list_new(value);
	return (list);
}
