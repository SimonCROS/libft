# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 11:39:11 by scros             #+#    #+#              #
#    Updated: 2021/01/16 17:07:26 by scros            ###   ########lyon.fr    #
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

COLOR		= color
CONV		= convert
LIST		= list
ITERATOR	= iterator
MATH		= math
MEMORY		= memory
PRINT		= print
STRING		= string
UTIL		= util
VECTOR3		= vector3

COLOR_SRCS	=	ft_color_clone.c		\
				ft_color_from.c			\
				ft_color_to.c			\
				ft_color_from_alpha.c	\
				ft_color_to_alpha.c		\

CONV_SRCS	=	ft_atoi.c				\
				ft_atoi_len.c			\
				ft_iton.c				\
				ft_iton_to.c			\
				ft_llton.c				\
				ft_llton_to.c			\
				ft_lton.c				\
				ft_lton_to.c			\
				ft_ston.c				\
				ft_ston_to.c			\
				ft_cton.c				\
				ft_cton_to.c			\

ITERATOR_SRCS=	ft_iterator_has_next.c	\
				ft_iterator_new.c		\
				ft_iterator_next.c		\

LIST_SRCS	=	ft_lst_add_all.c		\
				ft_lst_clear.c			\
				ft_lst_destroy.c		\
				ft_lst_foreach.c		\
				ft_lst_get_entry.c		\
				ft_lst_is_empty.c		\
				ft_lst_last.c			\
				ft_lst_new.c			\
				ft_lst_pop.c			\
				ft_lst_set.c			\
				ft_lst_copy.c			\
				ft_lst_size.c			\
				ft_lst_map.c			\
				ft_lst_splice.c			\
				ft_lst_reduce.c			\
				ft_lst_concat.c			\
				ft_lst_shift_entry.c	\
				ft_lst_get.c			\
				ft_lst_remove.c			\
				ft_lst_insert.c			\
				ft_lst_last_entry.c		\
				ft_lst_new_entry.c		\
				ft_lst_push.c			\
				ft_lst_shift.c			\
				ft_lst_slice.c			\
				ft_lst_unshift.c		\

MATH_SRCS	=	ft_abs.c				\
				ft_charlen.c			\
				ft_cos.c				\
				ft_shortlen.c			\
				ft_intlen.c				\
				ft_longlen.c			\
				ft_longlonglen.c		\
				ft_max.c				\
				ft_min.c				\
				ft_sin.c				\
				ft_sqrt.c				\

MEMORY_SRCS	=	ft_bzero.c				\
				ft_calloc.c				\
				ft_memccpy.c			\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_memcpy.c				\
				ft_memmove.c			\
				ft_memset.c				\

PRINT_SRCS	=	printf/ft_applyer.c		\
				printf/ft_ints.c		\
				printf/ft_numtoa.c		\
				ft_printf.c				\
				ft_putchar.c			\
				ft_putendl.c			\
				ft_puthex.c				\
				ft_putnbr.c				\
				ft_putstr.c				\
				ft_putvec.c				\

STRING_SRCS	=	ft_isalnum.c			\
				ft_isalpha.c			\
				ft_isascii.c			\
				ft_isdigit.c			\
				ft_isprint.c			\
				ft_split.c				\
				ft_strchr.c				\
				ft_strinsert.c			\
				ft_strninsert.c			\
				ft_strdup.c				\
				ft_strindex_of.c		\
				ft_strjoin.c			\
				ft_strlcat.c			\
				ft_strlcpy.c			\
				ft_strlen.c				\
				ft_strmapi.c			\
				ft_strncmp.c			\
				ft_strnstr.c			\
				ft_strrchr.c			\
				ft_strtrim.c			\
				ft_substr.c				\
				ft_tolower.c			\
				ft_toupper.c			\
				ft_strtolower.c			\
				ft_strtoupper.c			\

UTIL_SRCS	=	ft_identity.c			\
				ft_ternary.c			\

VECTOR3_SRCS=	ft_vector3_add.c		\
				ft_vector3_clone.c		\
				ft_vector3_copy.c		\
				ft_vector3_cross.c		\
				ft_vector3_distance.c	\
				ft_vector3_div.c		\
				ft_vector3_dot.c		\
				ft_vector3_length.c		\
				ft_vector3_mul.c		\
				ft_vector3_new.c		\
				ft_vector3_normalize.c	\
				ft_vector3_set.c		\
				ft_vector3_sub.c		\


SRCS		=	$(addprefix $(COLOR)/, $(COLOR_SRCS))		\
				$(addprefix $(CONV)/, $(CONV_SRCS))			\
				$(addprefix $(LIST)/, $(LIST_SRCS))			\
				$(addprefix $(ITERATOR)/, $(ITERATOR_SRCS))	\
				$(addprefix $(MATH)/, $(MATH_SRCS))			\
				$(addprefix $(MEMORY)/, $(MEMORY_SRCS))		\
				$(addprefix $(PRINT)/, $(PRINT_SRCS))		\
				$(addprefix $(STRING)/, $(STRING_SRCS))		\
				$(addprefix $(UTIL)/, $(UTIL_SRCS))			\
				$(addprefix $(VECTOR3)/, $(VECTOR3_SRCS))	\

OBJS		=	$(addprefix $(BIN)/, $(SRCS:.c=.o))

HEADERS		=	$(addprefix $(INC)/, libft.h)

NAME		= libft.a

CC			= gcc
RM			= rm -rf

CFLAGS		= -Wall -Wextra -Werror

bar			= 0
compile		= 0
COLOR_COUNTER	= 0
CONV_COUNTER	= 0
LIST_COUNTER	= 0
ITERATOR_COUNTER= 0
MATH_COUNTER	= 0
MEMORY_COUNTER	= 0
PRINT_COUNTER	= 0
STRING_COUNTER	= 0
UTIL_COUNTER	= 0
VECTOR3_COUNTER	= 0
count		= $(words $(SRCS))
compile_code= tabs 6; \
			if [ $(bar) -eq 0 ]; then \
				echo "$$(($(COUNTER)*100/$(count)))%	$(_WHITE)\xE2\x9D\x96$(_RESET) $(_BLUE)Compiling source $(_GREEN)$< $(_BLUE)\xE2\x86\x92 $(_YELLOW)$@$(_RESET)\c"; \
			elif [ $(bar) -eq 1 ]; then \
				tput cuu1; \
				if [ $$local_compt -gt 1 ]; then \
					tput cuu1; \
				fi; \
				tput el; \
				printf "$${color}%*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s ($(_YELLOW)$<$(_BLUE))\n" $$(($$local_compt*50/$$local_count)) " " $$((50 - ($$local_compt*50/$$local_count))) $$((50 - ($$local_compt*50/$$local_count))) " " $$(($$local_compt*100/$$local_count)) "$$name..."; \
				\
				tput el; \
				printf "$(_IGREEN)%*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s\n" $$(($(COUNTER)*50/$(count))) " " $$((50 - ($(COUNTER)*50/$(count)))) $$((50 - ($(COUNTER)*50/$(count)))) " " $$(($(COUNTER)*100/$(count))) "..."; \
			elif [ $(bar) -eq 2 ]; then \
				tput el; \
				printf "$(_IGREEN)%*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s ($(_YELLOW)$<$(_BLUE))\r" $$(($(COUNTER)*50/$(count))) " " $$((50 - ($(COUNTER)*50/$(count)))) $$((50 - ($(COUNTER)*50/$(count)))) " " $$(($(COUNTER)*100/$(count))) "..."; \
			fi; \
			mkdir -p $(dir $@); \
			$(CC) $(CFLAGS) -c -o $@ $< -I $(INC); \
			if [ $(bar) -eq 0 ]; then \
				echo " $(_GREEN)\xE2\x9C\x93$(_RESET)"; \
			elif [ $(bar) -eq 1 ]; then \
				if [ $$local_compt -eq $$local_count ]; then \
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
			elif [ $(bar) -eq 2 ]; then \
				if [ $(COUNTER) -eq $(count) ]; then \
					tput el; \
					printf "$(_IGREEN)%*s$(_RESET) $(_PURPLE)100%% $(_BLUE)Compiling %-15s $(_GREEN)done\n" 50 " " "..."; \
				fi; \
			fi; \

all:		$(NAME)

ball:		bar $(NAME)
			
bar:
			$(eval bar=1)

$(BIN)/$(COLOR)/%.o: $(SRC)/$(COLOR)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval COLOR_COUNTER=$(shell echo $$(($(COLOR_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(COLOR_COUNTER); local_count=$(words $(COLOR_SRCS)); name="colors"; $(compile_code)

$(BIN)/$(CONV)/%.o: $(SRC)/$(CONV)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval CONV_COUNTER=$(shell echo $$(($(CONV_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(CONV_COUNTER); local_count=$(words $(CONV_SRCS)); name="converters"; $(compile_code)

$(BIN)/$(LIST)/%.o: $(SRC)/$(LIST)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval LIST_COUNTER=$(shell echo $$(($(LIST_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(LIST_COUNTER); local_count=$(words $(LIST_SRCS)); name="lists"; $(compile_code)

$(BIN)/$(ITERATOR)/%.o: $(SRC)/$(ITERATOR)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval ITERATOR_COUNTER=$(shell echo $$(($(ITERATOR_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(ITERATOR_COUNTER); local_count=$(words $(ITERATOR_SRCS)); name="iterators"; $(compile_code)

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

$(BIN)/$(VECTOR3)/%.o: $(SRC)/$(VECTOR3)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			$(eval VECTOR3_COUNTER=$(shell echo $$(($(VECTOR3_COUNTER)+1))))
			@color="$(_IYELLOW)"; local_compt=$(VECTOR3_COUNTER); local_count=$(words $(VECTOR3_SRCS)); name="vector3"; $(compile_code)

$(BIN)/%.o: $(SRC)/%.c $(HEADERS)
			$(eval COUNTER=$(shell echo $$(($(COUNTER)+1))))
			@color="$(_IGREEN)"; local_compt=1; local_count=1; name=""; $(compile_code)

multi:		fclean pre_compile fast_comp post_compile
			@ar rc $(NAME) $(OBJS)

fast_comp:
			@tput cuu1;
			@$(MAKE) bar=2 -j --no-print-directory $(OBJS)

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

.PHONY:		all ball bar pre_compile post_compile clean fclean re bre multi fast_comp
