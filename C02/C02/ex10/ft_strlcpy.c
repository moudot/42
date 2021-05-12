/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 14:27:21 by moudot            #+#    #+#             */
/*   Updated: 2020/08/12 15:38:20 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a] != '\0')
	{
		a++;
	}
	if (!size)
		return (a);
	while (b < size - 1)
	{
		dest[b] = src[b];
		b++;
	}
	dest[b] = '\0';
	return (a);
}
