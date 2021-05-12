/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 12:07:17 by moudot            #+#    #+#             */
/*   Updated: 2020/08/07 12:18:02 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int alphabet;

	alphabet = 122;
	while (alphabet > 96)
	{
		write(1, &alphabet, 1);
		alphabet--;
	}
}
