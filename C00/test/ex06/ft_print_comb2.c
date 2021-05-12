/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 15:47:20 by moudot            #+#    #+#             */
/*   Updated: 2020/08/08 17:47:57 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 01;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_putchar(a / 10 + 48);
			ft_putchar(a % 10 + 48);
			write(1, " ", 1);
			ft_putchar(b / 10 + 48);
			ft_putchar(b % 10 + 48);
			b++;
			if (a < 98)
				write(1, ", ", 2);
		}
		b = ++a + 1;
	}
}
