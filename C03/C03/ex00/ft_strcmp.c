/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 14:47:09 by moudot            #+#    #+#             */
/*   Updated: 2020/08/13 01:12:29 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int x;

	x = 0;
	while (s1[x] && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}
