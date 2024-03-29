/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 16:46:37 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/12 16:46:38 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <libft.h>
# include <stdlib.h>

typedef struct		s_node
{
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct		s_dlist
{
	size_t			len;
	t_node			*head;
	t_node			*tail;
}					t_dlist;

t_dlist				*list_new(void);
t_dlist				*list_append(t_dlist *list, int value);
t_dlist				*list_prepend(t_dlist *list, int value);
t_dlist				*list_del(t_dlist *list, t_node *node);
void				print_list(t_dlist *list);
void				sa(t_dlist *list);
void				sb(t_dlist *list);
void				ss(t_dlist *l_a, t_dlist *l_b);
void				pa(t_dlist *l_a, t_dlist *l_b);
void				pb(t_dlist *l_a, t_dlist *l_b);
void				ra(t_dlist *list);
void				rb(t_dlist *list);
void				rr(t_dlist *l_a, t_dlist *l_b);
void				rra(t_dlist *list);
void				rrb(t_dlist *list);
void				rrr(t_dlist *l_a, t_dlist *l_b);
void				push_swap(t_dlist *l_a, t_dlist *l_b);

#endif
