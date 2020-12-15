# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 11:39:11 by scros             #+#    #+#              #
#    Updated: 2020/12/15 11:00:47 by scros            ###   ########lyon.fr    #
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
CONV		= convert
LIST		= list
MATH		= math
MEMORY		= memory
PRINT		= print
STRING		= string
UTIL		= util

CONV_SRCS	=	ft_atoi.c			\
				ft_atoi_len.c		\
				ft_itoa.c

LIST_SRCS	=	ft_lst_add_all.c	\
				ft_lst_clear.c		\
				ft_lst_destroy.c	\
				ft_lst_foreach.c	\
				ft_lst_get_entry.c	\
				ft_lst_is_empty.c	\
				ft_lst_last.c		\
				ft_lst_new.c		\
				ft_lst_pop.c		\
				ft_lst_set.c		\
				ft_lst_copy.c		\
				ft_lst_size.c		\
				ft_lst_map.c		\
				ft_lst_splice.c		\
				ft_lst_reduce.c		\
				ft_lst_concat.c		\
				ft_lst_shift_entry.c\
				ft_lst_get.c		\
				ft_lst_remove.c		\
				ft_lst_insert.c		\
				ft_lst_last_entry.c	\
				ft_lst_new_entry.c	\
				ft_lst_push.c		\
				ft_lst_shift.c		\
				ft_lst_slice.c		\
				ft_lst_unshift.c

MATH_SRCS	=	ft_min.c			\
				ft_max.c			\
				ft_abs.c

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
				ft_strinsert.c		\
				ft_strdup.c			\
				ft_strindex_of.c	\
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

UTIL_SRCS	=	ft_identity.c		\
				ft_ternary.c


SRCS		=	$(addprefix $(CONV)/, $(CONV_SRCS))		\
				$(addprefix $(LIST)/, $(LIST_SRCS))		\
				$(addprefix $(MATH)/, $(MATH_SRCS))		\
				$(addprefix $(MEMORY)/, $(MEMORY_SRCS))	\
				$(addprefix $(PRINT)/, $(PRINT_SRCS))	\
				$(addprefix $(STRING)/, $(STRING_SRCS))	\
				$(addprefix $(UTIL)/, $(UTIL_SRCS))		\

OBJS		=	$(addprefix $(BIN)/, $(SRCS:.c=.o))

HEADERS		=	$(addprefix $(INC)/, libft.h)

NAME		= libft.a

CC			= gcc
RM			= rm -rf

CFLAGS		= -Wall -Wextra -Werror

bar			= 0
compile		= 0
CONV_COUNTER	= 0
LIST_COUNTER	= 0
MATH_COUNTER	= 0
MEMORY_COUNTER	= 0
PRINT_COUNTER	= 0
STRING_COUNTER	= 0
UTIL_COUNTER	= 0
count		= $(words $(SRCS))
compile_code= tabs 6; \
			if [ $(bar) -eq 0 ]; then \
				echo "$$(($(COUNTER)*100/$(count)))%	$(_WHITE)\xE2\x9D\x96$(_RESET) $(_BLUE)Compiling source $(_GREEN)$< $(_BLUE)\xE2\x86\x92 $(_YELLOW)$@$(_RESET)\c"; \
			else \
				tput cuu1; \
				if [ $$local_compt -gt 1 ]; then \
					tput cuu1; \
				fi; \
				tput el; \
				printf "$${color}%*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s ($(_YELLOW)$<$(_BLUE))\n" $$(($$local_compt*50/$$local_count)) " " $$((50 - ($$local_compt*50/$$local_count))) $$((50 - ($$local_compt*50/$$local_count))) " " $$(($$local_compt*100/$$local_count)) "$$name..."; \
				\
				tput el; \
				printf "$(_IGREEN)%*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s\n" $$(($(COUNTER)*50/$(count))) " " $$((50 - ($(COUNTER)*50/$(count)))) $$((50 - ($(COUNTER)*50/$(count)))) " " $$(($(COUNTER)*100/$(count))) "..."; \
			fi; \
			mkdir -p $(dir $@); \
			$(CC) $(CFLAGS) -c -o $@ $< -I $(INC); \
			if [ $(bar) -eq 0 ]; then \
				echo " $(_GREEN)\xE2\x9C\x93$(_RESET)"; \
			elif [ $$local_compt -eq $$local_count ]; then \
				tput cuu1; \
				tput cuu1; \
				tput el; \
				printf "$${color}%*s$(_RESET) $(_PURPLE)100%% $(_BLUE)Compiling %-15s $(_GREEN)done\n" 50 " " "$$name..."; \
				tput cud1; \
				if [ $(COUNTER) -eq $(count) ]; then \
					tput cuu1; \
					tput el; \
					printf "$(_IGREEN)%*s$(_RESET) $(_PURPLE)100%% $(_BLUE)Compiling %-15s $(_GREEN)done\n" 50 " " "..."; \
				fi; \
			fi; \

all:		$(NAME)

ball:		bar $(NAME)
			
bar:
			$(eval bar=1)

$(BIN)/$(CONV)/%.o: $(SRC)/$(CONV)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval CONV_COUNTER=$(shell echo $$(($(CONV_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(CONV_COUNTER); local_count=$(words $(CONV_SRCS)); name="converters"; $(compile_code)

$(BIN)/$(LIST)/%.o: $(SRC)/$(LIST)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval LIST_COUNTER=$(shell echo $$(($(LIST_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(LIST_COUNTER); local_count=$(words $(LIST_SRCS)); name="lists"; $(compile_code)

$(BIN)/$(MATH)/%.o: $(SRC)/$(MATH)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval MATH_COUNTER=$(shell echo $$(($(MATH_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(MATH_COUNTER); local_count=$(words $(MATH_SRCS)); name="maths"; $(compile_code)

$(BIN)/$(MEMORY)/%.o: $(SRC)/$(MEMORY)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval MEMORY_COUNTER=$(shell echo $$(($(MEMORY_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(MEMORY_COUNTER); local_count=$(words $(MEMORY_SRCS)); name="memories"; $(compile_code)

$(BIN)/$(PRINT)/%.o: $(SRC)/$(PRINT)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval PRINT_COUNTER=$(shell echo $$(($(PRINT_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(PRINT_COUNTER); local_count=$(words $(PRINT_SRCS)); name="printers"; $(compile_code)

$(BIN)/$(STRING)/%.o: $(SRC)/$(STRING)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval STRING_COUNTER=$(shell echo $$(($(STRING_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(STRING_COUNTER); local_count=$(words $(STRING_SRCS)); name="strings"; $(compile_code)

$(BIN)/$(UTIL)/%.o: $(SRC)/$(UTIL)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval UTIL_COUNTER=$(shell echo $$(($(UTIL_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(UTIL_COUNTER); local_count=$(words $(UTIL_SRCS)); name="utils"; $(compile_code)

$(BIN)/%.o: $(SRC)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			@color="$(_IGREEN)"; local_compt=0; local_count=0; name=""; $(compile_code)

$(NAME):	$(HEADERS) pre_compile $(OBJS) post_compile
			@ar rc $(NAME) $(OBJS)

pre_compile:
			@echo "$(_BOLD)$(_CYAN)Compiling...$(_RESET)"
			@echo "\n\n"

post_compile:
			@echo "\n"
			@echo "$(_RED)Finished ! $(_RESET)($(_PURPLE)$(COUNTER)$(_RESET) files compiled)$(_RESET)"

clean:
			@echo "\xF0\x9F\x97\x91  $(_BOLD)$(_YELLOW)Deleting objects...$(_RESET)\n"
			@$(RM) $(OBJS)

fclean:		clean
			@echo "\xF0\x9F\x97\x91  $(_BOLD)$(_RED)Deleting $(NAME)$(_RESET)\n"
			@$(RM) $(NAME)

re:			fclean all

bre:		fclean ball

.PHONY:		all ball bar pre_compile post_compile clean fclean re bre
