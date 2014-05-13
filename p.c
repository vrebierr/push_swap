/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/13 15:18:32 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/13 15:18:33 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	verif(t_dlist *list)
{
	if (list == NULL || list->head == NULL)
		return (0);
	return (1);
}

static void		p(t_dlist *l_a, t_dlist *l_b)
{
	list_prepend(l_a, l_b->head->data);
	list_del(l_b, l_b->head);
}

void		pa(t_dlist *l_a, t_dlist *l_b)
{
	if (verif(l_b))
	{
		p(l_a, l_b);
		ft_putstr("pa");
	}
}

void		pb(t_dlist *l_a, t_dlist *l_b)
{
	if (verif(l_a))
	{
		p(l_b, l_a);
		ft_putstr("pb");
	}
}
