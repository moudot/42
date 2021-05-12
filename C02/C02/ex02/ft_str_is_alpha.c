/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 18:12:26 by moudot            #+#    #+#             */
/*   Updated: 2020/08/10 18:52:44 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x])
	{
		if ((str[x] < 'a' && str[x] > 'Z') ||
			(str[x] < 'A') || (str[x] > 'z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}