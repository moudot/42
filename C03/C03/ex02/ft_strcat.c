/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 02:07:58 by moudot            #+#    #+#             */
/*   Updated: 2020/08/18 16:43:21 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char *x;

	x = dest;
	while (*x)
		x++;
	while (*src)
	{
		*x++ = *src++;
	}
	*x = '\0';
	return (dest);
}
