/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 01:53:59 by moudot            #+#    #+#             */
/*   Updated: 2020/08/19 23:42:18 by moudot           ###   ########.fr       */
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
	(void)argc;
	(void)argv;
	ft_putstr(argv[0]);
	return (0);
}
