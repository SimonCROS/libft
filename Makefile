# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 11:39:11 by scros             #+#    #+#              #
#    Updated: 2020/11/25 11:52:09 by scros            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		= ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memcpy.c\
	ft_strchr.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_toupper.c ft_bzero.c\
	ft_isalpha.c ft_isdigit.c ft_memcmp.c ft_putstr_fd.c ft_strlcat.c\
	ft_strlen.c ft_strnstr.c ft_tolower.c ft_memccpy.c ft_memccpy.c\
	ft_putchar_fd.c ft_memmove.c ft_memchr.c ft_calloc.c ft_strdup.c ft_split.c\
	ft_strjoin.c ft_putnbr_fd.c ft_putendl_fd.c ft_substr.c ft_memset.c
OBJS		= $(SRCS:.c=.o)

NAME		= libft.a

CC			= gcc
RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror 

all:		$(NAME)

.c.o:
			$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re