/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 18:05:25 by moudot            #+#    #+#             */
/*   Updated: 2020/08/18 04:49:04 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int x;
	int result;

	result = 1;
	x = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (x <= nb)
	{
		result = result * x;
		x++;
	}
	return (result);
}
