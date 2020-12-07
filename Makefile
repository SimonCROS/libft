# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 11:39:11 by scros             #+#    #+#              #
#    Updated: 2020/12/07 14:56:10 by scros            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

# Styles
_RESET		= \033[0m
_BOLD		= \033[1m
_UNDER		= \033[4m
_REV		= \033[7m

# Colors
_GREY		= \033[30m
_RED		= \033[31m
_GREEN		= \033[32m
_YELLOW		= \033[33m
_BLUE		= \033[34m
_PURPLE		= \033[35m
_CYAN		= \033[36m
_WHITE		= \033[37m

# Backgrounds
_IGREY		= \033[40m
_IRED		= \033[41m
_IGREEN		= \033[42m
_IYELLOW	= \033[43m
_IBLUE		= \033[44m
_IPURPLE	= \033[45m
_ICYAN		= \033[46m
_IWHITE		= \033[47m

BIN			= bin
SRC			= src
INC			= includes

CONV_SRCS	=	ft_atoi.c			\
				ft_itoa.c

LIST_SRCS	=	ft_lstadd_back.c	\
				ft_lstadd_front.c	\
				ft_lstclear.c		\
				ft_lstdelone.c		\
				ft_lstiter.c		\
				ft_lstlast.c		\
				ft_lstmap.c			\
				ft_lstnew.c			\
				ft_lstsize.c

MEMORY_SRCS	=	ft_bzero.c			\
				ft_calloc.c			\
				ft_memccpy.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memmove.c		\
				ft_memset.c

PRINT_SRCS	=	ft_putchar_fd.c		\
				ft_putendl_fd.c		\
				ft_putnbr_fd.c		\
				ft_putstr_fd.c

STRING_SRCS	=	ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_isprint.c		\
				ft_split.c			\
				ft_strchr.c			\
				ft_strdup.c			\
				ft_strjoin.c		\
				ft_strlcat.c		\
				ft_strlcpy.c		\
				ft_strlen.c			\
				ft_strmapi.c		\
				ft_strncmp.c		\
				ft_strnstr.c		\
				ft_strrchr.c		\
				ft_strtrim.c		\
				ft_substr.c			\
				ft_tolower.c		\
				ft_toupper.c

SRCS		=	$(addprefix convert/, $(CONV_SRCS))	\
				$(addprefix list/, $(LIST_SRCS))	\
				$(addprefix memory/, $(MEMORY_SRCS))\
				$(addprefix print/, $(PRINT_SRCS))	\
				$(addprefix string/, $(STRING_SRCS))\

OBJS		= $(addprefix $(BIN)/, $(SRCS:.c=.o))

HEADERS		= $(addprefix $(INC)/, libft.h)

NAME		= libft.a

CC			= gcc
RM			= rm -rf

CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

compteur = 0
count =	$(words $(SRCS))

$(BIN)/%.o: $(SRC)/%.c $(HEADERS)
			$(eval compteur=$(shell echo $$(($(compteur)+1))))
			@tabs 6
			@echo "$$(($(compteur)*100/$(count)))%	$(_WHITE)\xE2\x9D\x96$(_RESET) $(_BLUE)Compiling source $(_GREEN)$< $(_BLUE)→ $(_PURPLE)$@$(_RESET)"
			@mkdir -p $(dir $@)
			@$(CC) $(CFLAGS) -c -o $@ $< -I $(INC)

$(NAME):	$(OBJS) $(HEADERS)
			@ar rc $(NAME) $(OBJS)

clean:
			@echo "$(_BOLD)$(_YELLOW)Deleting objects...$(_RESET)"
			@$(RM) $(OBJS)

fclean:		clean
			@echo "$(_BOLD)$(_RED)Deleting $(NAME)$(_RESET)"
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
