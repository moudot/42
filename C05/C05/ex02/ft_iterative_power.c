/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 22:52:50 by moudot            #+#    #+#             */
/*   Updated: 2020/08/18 00:27:37 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int x;
	int temp;

	x = 1;
	temp = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (x < power)
	{
		nb = nb * temp;
		x++;
	}
	return (nb);
}
