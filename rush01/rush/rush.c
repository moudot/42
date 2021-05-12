/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttranche <ttranche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/12 16:52:41 by ttranche          #+#    #+#             */
/*   Updated: 2020/08/15 15:41:30 by ttranche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int TABSIZE = 9;

int		print_map(int **tab)
{
	
	int i = 0;
	while (i < TABSIZE)
	{
		int j = 0;
		while (j < TABSIZE)
		{
			char temp = '0' + tab[i][j];
			write(1, &temp, 1);
			write(1, " ", 1);
			++j;
		}
		write(1, "\n", 1);
		++i;
	}


	return 0;
}

int		*get_available_nums(int *row)
{
	int i;
	int *nums;

	nums = malloc(sizeof(int) * TABSIZE);
	i = 0;
	while (i < TABSIZE)
	{
		nums[i] = TABSIZE - i;
		++i;
	}
	
	i = 0;
	
	while (i < TABSIZE)
	{
		if (row[i] != 0)
			nums[TABSIZE - row[i]] = 0;
		++i;
	}
	return nums;
}

int		is_valid_to_left(int side, int *row, int *ava)
{
	int maxvisible;
	int obig;
	int visible;
	int biggest;
	int i;

	i = 0;
	visible = 0;
	biggest = 0;
	while (i < TABSIZE)
		if (biggest < row[i++] && ++visible)
			biggest = row[i - 1];
	maxvisible = visible;
	obig = biggest;
	i = TABSIZE - 1;
	while (i >= 0)
	{
		if (biggest < ava[i])
		{
			maxvisible++;
			biggest = ava[i];
		}
		--i;
	}
	i = 0;
	while (i < TABSIZE)
	{
		if (obig < ava[i])
		{
			visible++;
			obig = ava[i];
		}
		++i;
	}
	free(ava);
	i = 0;
	return side >= visible && side <= maxvisible;
}

int		is_valid_to_right(int side, int *row, int *ava)
{
	int maxvisible;
	int obig;
	int visible;
	int biggest;
	int i;

	i = TABSIZE - 1;
	maxvisible = 0;
	biggest = 0;
	while (i >= 0)
	{
		if (biggest < ava[i])
		{
			biggest = ava[i];
			++maxvisible;
		}	
		--i;
	}
	i = TABSIZE - 1;
	while (i >= 0)
	{
		if (biggest < row[i])
		{
			biggest = row[i];
			++maxvisible;
		}	
		--i;
	}
	visible = 0;
	biggest = 0;
	i = 0;
	while (i < TABSIZE)
	{
		if (biggest < ava[i])
		{
			biggest = ava[i];
			++visible;
		}	
		++i;
	}
	i = TABSIZE - 1;
	while (i >= 0)
	{
		if (biggest < row[i])
		{
			biggest = row[i];
			++visible;
		}	
		--i;
	}
	free(ava);	
	return side >= visible && side <= maxvisible;
}

int		*rotate_col(int pos, int **tab)
{
	int i;
	int *rotated;
	int x;

	x = pos % TABSIZE;
	rotated = malloc(sizeof(int) * TABSIZE);
	i = 0;
	while (i < TABSIZE)
	{
		rotated[i] = tab[i][x];
		++i;
	}
	return rotated;
}

int		check(int **sidecheck, int **tab, int pos)
{
	int y;
	int x;
	int valid = 1;
	int	*rotated;

	x = pos % TABSIZE;
	y = pos / TABSIZE;
	rotated = rotate_col(pos, tab);

	int topvalue = sidecheck[0][x];
	int bottomvalue = sidecheck[1][x];

	valid &= is_valid_to_left(sidecheck[2][y], tab[y], get_available_nums(tab[y]));
	valid &= is_valid_to_right(sidecheck[3][y], tab[y], get_available_nums(tab[y]));
	valid &= is_valid_to_left(sidecheck[0][x], rotated, get_available_nums(rotated));
	valid &= is_valid_to_right(sidecheck[1][x], rotated, get_available_nums(rotated));

	free(rotated);

	return valid;
}

int		check_dupe(int **tab, int pos, int value)
{

	int x;
	int y;
	int i;

	x = pos % TABSIZE;
	y = pos / TABSIZE;
	
	i = 0;
	while (i < TABSIZE)
	{
		if (tab[i++][x] == value)
			return 1;
	}

	i = 0;
	while (i < TABSIZE)
	{
		if (tab[y][i++] == value)
			return 1;
	}

	return (0);
}


int		**resolve(int **sidecheck, int **tab, int pos)
{
	
	int i = 0;
	int x = pos % TABSIZE;
	int y = pos / TABSIZE;
	
	while (++i <= TABSIZE)
	{
		tab[y][x] = 0;
		if (check_dupe(tab, pos, i))
		{
			//printf("dupe! %i x:%i y:%i \n", i, x , y);
			continue;
		}
		tab[y][x] = i;
		//print_map(tab);
		if (!check(sidecheck, tab, pos))
		{
			//printf("nope\n");
			continue;
		}else
		{
			//printf("YEP\n");
		}
			//printf("solution found");

			//exit(0);
		if (pos + 1  == TABSIZE * TABSIZE)
		{
			//printf("solution found");
			return tab;
			//exit(0);
		}
		if(resolve(sidecheck, tab, pos + 1))
			return tab;

	}
	tab[y][x] = 0;

	//is_valid(sidecheck, tab, 0);

	return 0;
}

/*
 
	printf("\n\nvisible: %i, MAX visible: %i\n", visible, maxvisible);
	printf("\n\nleftvalue: %i\n", i);

 */

int		error()
{
		write(1, "Error\n", 6);
		return (0);
}

int		main(int argc, char **argv)
{
	
	int i = 0;
	
	int **tab;
	tab = malloc(sizeof(int*) * (TABSIZE));


	while (i < TABSIZE)
	{
		tab[i] = malloc(sizeof(int) * TABSIZE);
		int j = 0;
		while (j < TABSIZE)
		{
			tab[i][j] = 0;
			++j;
		}
		++i;
	}

	int **sidechecks;

	sidechecks = malloc(sizeof(int*) * (4));

	if (argc != 2 || !*(argv[1]))
		return (error());

	i = 0;
	while (i < 4)
		sidechecks[i++] = malloc(sizeof(int) * TABSIZE);
	i = 0;
	int idk = 0;
	while (argv[1][i] && idk < 4 * TABSIZE)
	{
		if (i % 2 == 0 && argv[1][i] >= '1' && argv[1][i] <= '8')
		{
			sidechecks[idk / TABSIZE][idk % TABSIZE] = argv[1][i] - '0';
			++idk;
		}
		else if (i % 2 == 0 || (i % 2 == 1 && !(argv[1][i] == ' ')))
			return (error());
		++i;
	}

	if (argv[1][i] != 0 || idk < 4 * TABSIZE)
		return (error());

	int **result = resolve((int**)sidechecks, tab, 0);

	if (result)
		print_map(result);

	i = 0;
	while (i < 4)
		free(sidechecks[i++]);
	i = 0;
	while (i < TABSIZE)
		free(tab[i++]);

	free(tab);
	free(sidechecks);

	return (0);
}
/*
int *temp = malloc(sizeof(int) * TABSIZE);
temp[0] = 4;
temp[1] = 1;
temp[2] = 0;
temp[3] = 0;
	
int *ava = get_available_nums(temp);
	
i = 0;
while (i < TABSIZE)
	printf("%i, ", temp[i++]);

//printf("\n%i", is_valid_to_left(1, temp, ava));
printf("\n%i", is_valid_to_right(4, temp, ava));*/

