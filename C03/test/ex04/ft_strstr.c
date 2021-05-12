/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 14:49:14 by moudot            #+#    #+#             */
/*   Updated: 2020/08/15 23:19:21 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[x])
	{
		while (str[x + y] == to_find[y])
		{
			y++;
			if (to_find[y] == '\0')
				return (&str[x]);
		}
		y = 0;
		x++;
	}
	return (0);
}
