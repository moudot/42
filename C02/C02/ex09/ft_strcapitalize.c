/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moudot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 23:14:28 by moudot            #+#    #+#             */
/*   Updated: 2020/08/11 00:21:15 by moudot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	ft_strlowcase(str);
	if (str[x] >= 'a' && str[x] <= 'z')
	{
		str[x] -= 32;
	}
	while (str[x])
	{
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (!((str[x - 1] >= 'a' && str[x - 1] <= 'z') ||
						(str[x - 1] >= '0' && str[x - 1] <= '9') ||
						(str[x - 1] >= 'A' && str[x - 1] <= 'Z')))
			{
				str[x] -= 32;
			}
		}
		x++;
	}
	return (str);
}
