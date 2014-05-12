/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgronon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 09:54:55 by bgronon           #+#    #+#             */
/*   Updated: 2013/11/24 02:14:21 by bgronon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i] || s2[i] == '\0')
			return (1);
		i++;
	}
	if (s2[i] != '\0' && i < n)
		return (-1);
	return (0);
}