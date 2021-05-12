/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 02:20:05 by moudot            #+#    #+#             */
/*   Updated: 2020/08/19 23:43:44 by moudot           ###   ########.fr       */
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

	x = 1;
	while (x < argc)
	{
		ft_putstr(argv[x]);
		x++;
	}
	return (0);
}
