# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 11:39:11 by scros             #+#    #+#              #
#    Updated: 2020/11/24 08:57:04 by scros            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_strlen.c ft_putstr_fd.c ft_toupper.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strnstr.c ft_strncmp.c ft_memcmp.c
OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror 

all:		${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re