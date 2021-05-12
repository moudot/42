/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/13 18:15:56 by moudot            #+#    #+#             */
/*   Updated: 2020/08/17 16:35:18 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	long	res;
	int 	sign;
	int 	x;

	res = 0;
	x = 0;
	sign = 1;
	while ((str[x] == ' ') || (str[x] == '\n') || (str[x] == '\f') ||
			(str[x] == '\r') || (str[x] == '\t') || (str[x] == '\v'))
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			sign *= -1;
		x++;
	}
	while ((str[x] != '\0') && (str[x] >= '0') && (str[x] <= '9'))
	{
		res *= 10;
		res += (int)str[x] - '0';
		x++;
	}
	return ((int)(res * sign));
}
