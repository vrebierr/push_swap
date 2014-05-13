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

void	show_usage()
{
	ft_putstr("Usage: ./push_swap value1 value2 value3 etc...");
	exit(1);
}

int		main(int argc, char **argv)
{
	t_dlist	*list;

	if (argc <= 1)
		show_usage();
	argv++;
	list = list_new();
	while (*argv)
	{
		list = list_append(list, ft_atoi(*argv));
		argv++;
	}
	print_list(list);
	sa(list);
	sa(list);
	print_list(list);
	return (0);
}
