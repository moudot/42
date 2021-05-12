/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:19:34 by moudot            #+#    #+#             */
/*   Updated: 2020/08/09 20:12:30 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int alphabet;

	alphabet = 97;
	while (alphabet < 123)
	{
		write(1, &alphabet, 1);
		alphabet++;
	}
}
