/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 02:34:10 by moudot            #+#    #+#             */
/*   Updated: 2020/08/18 16:55:00 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *x;

	x = dest;
	while (*x)
		x++;
	while (nb-- && *src)
		*x++ = *src++;
	*x = '\0';
	return (dest);
}
