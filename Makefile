# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 11:39:11 by scros             #+#    #+#              #
#    Updated: 2021/01/22 10:25:54 by scros            ###   ########lyon.fr    #
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
ITERAT		= iterator
MATH		= math
MEMORY		= memory
PRINT		= print
STRING		= string
UTIL		= util
VECTOR3		= vector3

COLOR_SRCS	=	$(addprefix $(COLOR)/,	\
				ft_color_add.c			\
				ft_color_clone.c		\
				ft_color_div.c			\
				ft_color_from.c			\
				ft_color_to.c			\
				ft_color_mul.c			\
				ft_color_sub.c			\
				ft_color_from_alpha.c	\
				ft_color_to_alpha.c		\
				)

CONV_SRCS	=	$(addprefix $(CONV)/,	\
				ft_atoi.c				\
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
				)

ITERAT_SRCS	=	$(addprefix $(ITERAT)/,	\
				ft_iterator_has_next.c	\
				ft_iterator_new.c		\
				ft_iterator_next.c		\
				)

LIST_SRCS	=	$(addprefix $(LIST)/,	\
				ft_lst_add_all.c		\
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
				)

MATH_SRCS	=	$(addprefix $(MATH)/,	\
				ft_abs.c				\
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
				)

MEMORY_SRCS	=	$(addprefix $(MEMORY)/,	\
				ft_bzero.c				\
				ft_calloc.c				\
				ft_memccpy.c			\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_memcpy.c				\
				ft_memmove.c			\
				ft_memset.c				\
				)

PRINT_SRCS	=	$(addprefix $(PRINT)/,	\
				printf/ft_applyer.c		\
				printf/ft_ints.c		\
				printf/ft_numtoa.c		\
				ft_printf.c				\
				ft_putchar.c			\
				ft_putendl.c			\
				ft_puthex.c				\
				ft_putnbr.c				\
				ft_putstr.c				\
				ft_putvec.c				\
				)

STRING_SRCS	=	$(addprefix $(STRING)/,	\
				ft_isalnum.c			\
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
				)

UTIL_SRCS	=	$(addprefix $(UTIL)/,	\
				ft_identity.c			\
				ft_ternary.c			\
				)

VECTOR3_SRCS=	$(addprefix $(VECTOR3)/,\
				ft_vector3_add.c		\
				ft_vector3_angle.c		\
				ft_vector3_clone.c		\
				ft_vector3_copy.c		\
				ft_vector3_cross.c		\
				ft_vector3_distance.c	\
				ft_vector3_div.c		\
				ft_vector3_negate.c		\
				ft_vector3_dot.c		\
				ft_vector3_length.c		\
				ft_vector3_mul.c		\
				ft_vector3_rotate.c		\
				ft_vector3_new.c		\
				ft_vector3_normalize.c	\
				ft_vector3_set.c		\
				ft_vector3_sub.c		\
				)


SRCS		=	$(COLOR_SRCS)			\
				$(CONV_SRCS)			\
				$(LIST_SRCS)			\
				$(ITERAT_SRCS)			\
				$(MATH_SRCS)			\
				$(MEMORY_SRCS)			\
				$(PRINT_SRCS)			\
				$(STRING_SRCS)			\
				$(UTIL_SRCS)			\
				$(VECTOR3_SRCS)			\

OBJS		=	$(addprefix $(BIN)/, $($(join $(if $($(TYPE)_SRCS), $(TYPE)_)SRCS,:.c=.o)))

HEADERS		=	$(addprefix $(INC)/, libft.h)

BAR			= 0

OUTPUT		= libft.a

CC			= gcc
RM			= rm -rf

CFLAGS		= -Wall -Wextra -Werror
MFLAGS		= --no-print-directory V_GLOBAL_COUNT=$(GLOBAL_COUNT) V_GLOBAL_COUNTER=$(GLOBAL_COUNTER)

GLOBAL_COUNTER	= $(or $(V_GLOBAL_COUNTER),0)
GLOBAL_COUNT	= $(or $(V_GLOBAL_COUNT),$(words $(OBJS)))
GLOBAL_COLOR	= $(_IGREEN)

TYPE			=
TYPE_NAME		=
TYPE_COLOR		= $(_IYELLOW)
TYPE_COUNTER	= 0
TYPE_COUNT		= $(words $(OBJS))

ifeq ($(BAR), 0)
COMPILE_FILE	= tabs 6; \
			echo "$$(($(GLOBAL_COUNTER)*100/$(GLOBAL_COUNT)))%	$(_WHITE)\xE2\x9D\x96$(_RESET) $(_BLUE)Compiling source $(_GREEN)$< $(_BLUE)\xE2\x86\x92 $(_YELLOW)$@$(_RESET)\c"; \
			mkdir -p $(dir $@); \
			$(CC) $(CFLAGS) -c -o $@ $< -I $(INC); \
			echo " $(_GREEN)\xE2\x9C\x93$(_RESET)";
else
COMPILE_FILE	= tabs 6; \
			tput cuu1; \
			if [ $(TYPE_COUNTER) -gt 1 ]; then \
				tput cuu1; \
			fi; \
			tput el; \
			printf "$(TYPE_COLOR)%*.*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s ($(_YELLOW)$<$(_BLUE))\n" \
				$$(($(TYPE_COUNTER)*50/$(TYPE_COUNT))) \
				$$(($(TYPE_COUNTER)*50/$(TYPE_COUNT))) \
				" " \
				$$((50 - ($(TYPE_COUNTER)*50/$(TYPE_COUNT)))) \
				$$((50 - ($(TYPE_COUNTER)*50/$(TYPE_COUNT)))) \
				" " $$(($(TYPE_COUNTER)*100/$(TYPE_COUNT))) \
				"$(or $(TYPE_NAME),$(TYPE))..."; \
			\
			tput el; \
			printf "$(GLOBAL_COLOR)%*.*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s\n" \
				$$(($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT))) \
				$$(($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT))) \
				" " \
				$$((50 - ($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT)))) \
				$$((50 - ($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT)))) \
				" " \
				$$(($(GLOBAL_COUNTER)*100/$(GLOBAL_COUNT))) \
				"..."; \
			mkdir -p $(dir $@); \
			$(CC) $(CFLAGS) -c -o $@ $< -I $(INC); \
			if [ $(TYPE_COUNTER) -eq $(TYPE_COUNT) ]; then \
				tput cuu1; \
				tput cuu1; \
				tput el; \
				printf "$(TYPE_COLOR)%*s$(_RESET) $(_PURPLE)100%% $(_BLUE)Compiling %-15s $(_GREEN)done\n" 50 " " "$(or $(TYPE_NAME),$(TYPE))..."; \
				tput cud1; \
				if [ $(GLOBAL_COUNTER) -eq $(GLOBAL_COUNT) ]; then \
					tput cuu1; \
					tput el; \
					printf "$(GLOBAL_COLOR)%*s$(_RESET) $(_PURPLE)100%% $(_BLUE)Compiling %-15s $(_GREEN)done\n" 50 " " "..."; \
				fi; \
			fi;
endif

all:		$(OUTPUT)

ball:
			@$(MAKE) $(MFLAGS) BAR=1

$(BIN)/$($(TYPE))/%.o: $(SRC)/$($(TYPE))/%.c $(HEADERS)
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+1))))
			$(eval TYPE_COUNTER=$(shell echo $$(($(TYPE_COUNTER)+1))))
			@$(COMPILE_FILE)

ifeq ($($(TYPE)_SRCS),)
$(OUTPUT):	pre_compile compile post_compile
else
$(OUTPUT):	$(OBJS)
			@ar rc $@ $^
endif

pre_compile:
			@echo "$(_BOLD)$(_CYAN)Compiling...$(_RESET)"
			@echo "\n\n"

compile:
			@$(MAKE) $(MFLAGS) TYPE=COLOR	TYPE_NAME="colors"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(COLOR_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=CONV	TYPE_NAME="converters"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(CONV_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=LIST	TYPE_NAME="lists"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(LIST_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=ITERAT	TYPE_NAME="iterators"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(ITERAT_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=MATH	TYPE_NAME="maths"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(MATH_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=MEMORY	TYPE_NAME="memories"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(MEMORY_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=PRINT	TYPE_NAME="prints"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(PRINT_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=STRING	TYPE_NAME="strings"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(STRING_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=UTIL	TYPE_NAME="utils"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(UTIL_SRCS))))))
			@$(MAKE) $(MFLAGS) TYPE=VECTOR3	TYPE_NAME="3D vectors"
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $(VECTOR3_SRCS))))))

post_compile:
			@echo "\n"
			@echo "$(_RED)Finished ! $(_RESET)($(_PURPLE)$(GLOBAL_COUNTER)$(_RESET) files compiled)$(_RESET)"

clean:
			@echo "\xF0\x9F\x97\x91  $(_BOLD)$(_YELLOW)Deleting objects...$(_RESET)\n"
			@$(RM) $(OBJS)

fclean:		clean
			@echo "\xF0\x9F\x97\x91  $(_BOLD)$(_RED)Deleting $(OUTPUT)$(_RESET)\n"
			@$(RM) $(OUTPUT)

re:			fclean all

bre:		fclean ball

.PHONY:		all ball pre_compile compile post_compile clean fclean re bre
