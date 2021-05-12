# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moudot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 22:34:30 by moudot            #+#    #+#              #
#    Updated: 2020/08/26 22:34:35 by moudot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror ft_strlen.c ft_putstr.c ft_strcmp.c ft_putchar.c ft_swap.c
ar rcs libft.a  ft_strlen.o ft_putstr.o ft_strcmp.o ft_putchar.o ft_swap.o
rm *.o
