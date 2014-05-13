/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 16:39:50 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/13 16:39:51 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	r(t_dlist *list)
{
	list_prepend(list, list->tail->data);
	list_del(list, list->tail);
}

void	rra(t_dlist *list)
{
	r(list);
	ft_putstr("rra");
}

void	rrb(t_dlist *list)
{
	r(list);
	ft_putstr("rrb");
}

void	rrr(t_dlist *l_a, t_dlist *l_b)
{
	r(l_a);
	r(l_b);
	ft_putstr("rrr");
}
