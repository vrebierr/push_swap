/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 16:32:23 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/13 16:32:23 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r(t_dlist *list)
{
	list_append(list, list->head->data);
	list_del(list, list->head);
}

void	ra(t_dlist *list)
{
	r(list);
	ft_putstr("ra");
}

void	rb(t_dlist *list)
{
	r(list);
	ft_putstr("rb");
}

void	rr(t_dlist *l_a, t_dlist *l_b)
{
	r(l_a);
	r(l_b);
	ft_putstr("rr");
}
