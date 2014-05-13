/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrebierr <vrebierr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/12 16:43:09 by vrebierr          #+#    #+#             */
/*   Updated: 2014/05/12 16:43:10 by vrebierr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	show_usage(void)
{
	ft_putstr("Usage: ./push_swap value1 value2 value3 etc...\n");
	exit(1);
}

int		main(int argc, char **argv)
{
	t_dlist	*l_a;
	t_dlist *l_b;

	if (argc <= 1)
		show_usage();
	argv++;
	l_a = list_new();
	l_b = list_new();
	while (*argv)
	{
		l_a = list_append(l_a, ft_atoi(*argv));
		argv++;
	}
	push_swap(l_a, l_b);
	return (0);
}
