/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 17:50:23 by moudot            #+#    #+#             */
/*   Updated: 2020/08/08 20:56:25 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		write(1, "2", 1);
		nb = 147483648;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	nb = nb % 10 + 48;
	write(1, &nb, 1);
}
