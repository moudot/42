/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 02:24:29 by moudot            #+#    #+#             */
/*   Updated: 2020/08/19 23:44:33 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		ft_putchar(str[x]);
		x++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	int x;

	x = argc - 1;
	while (x > 0)
	{
		ft_putstr(argv[x]);
		x--;
	}
	return (0);
}
