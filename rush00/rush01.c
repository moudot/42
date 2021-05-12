/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 14:12:32 by moudot            #+#    #+#             */
/*   Updated: 2020/08/08 18:34:51 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	top(int x)
{
	int a;

	a = 0;
	ft_putchar('/');
	while (a < x - 2)
	{
		ft_putchar('*');
		a++;
	}
	if (x > 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	mid(int y, int x)
{
	int b;
	int a;

	b = 0;
	a = 0;
	while (b < y - 2)
	{
		ft_putchar('*');
		while (a < x - 2)
		{
			ft_putchar(' ');
			a++;
		}
		if (x > 1)
			ft_putchar('*');
		b++;
		a = 0;
		ft_putchar('\n');
	}
}

void	bot(int x)
{
	int a;

	a = 0;
	ft_putchar('\\');
	while (a < x - 2)
	{
		ft_putchar('*');
		a++;
	}
	if (x > 1)
		ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		return ;
	top(x);
	mid(x, y);
	if (y > 1)
		bot(x);
}
