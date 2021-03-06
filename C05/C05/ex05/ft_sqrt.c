/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 00:40:09 by moudot            #+#    #+#             */
/*   Updated: 2020/08/23 22:42:20 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int	x;

	x = 1;
	if (x <= 0)
		return (0);
	while (x * x < nb)
		x++;
	if (x * x == nb)
		return (x);
	return (0);
}
