/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 00:48:57 by moudot            #+#    #+#             */
/*   Updated: 2020/08/19 00:01:34 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (x <= nb / x)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
