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

void	show_usage()
{
	ft_putstr("Usage: ./push_swap value1 value2 value3 etc...");
	exit(1);
}

int		main(int argc, char **argv)
{
	if (argc <= 1)
		show_usage();
	return (0);
}
