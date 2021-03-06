/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 19:32:36 by moudot            #+#    #+#             */
/*   Updated: 2020/08/10 21:53:49 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		x++;
	}
	return (str);
}
