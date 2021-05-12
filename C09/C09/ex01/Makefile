# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moudot <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 22:34:45 by moudot            #+#    #+#              #
#    Updated: 2020/08/26 22:34:49 by moudot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS 	=	srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS 	=	${SRCS:.c=.o}
FLAGS 	=	-Wall -Wextra -Werror -I includes
CC		=	gcc
RM		=	rm -f
.c.o:
		$(CC) $(FLAGS) -c $< -o ${<:.c=.o}
${NAME}: ${OBJS}
			ar rcs ${NAME} ${OBJS}
all: ${NAME}
clean:
			${RM} ${OBJS}
fclean:		clean
			${RM} ${NAME}
re:			fclean all
.PHONY: all clean fclean re
