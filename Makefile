# Styles
override _RESET		= \033[0m
override _BOLD		= \033[1m
override _UNDER		= \033[4m
override _REV		= \033[7m

# Colors
override _GREY		= \033[30m
override _RED		= \033[31m
override _GREEN		= \033[32m
override _YELLOW	= \033[33m
override _BLUE		= \033[34m
override _PURPLE	= \033[35m
override _CYAN		= \033[36m
override _WHITE		= \033[37m

# Backgrounds
override _IGREY		= \033[40m
override _IRED		= \033[41m
override _IGREEN	= \033[42m
override _IYELLOW	= \033[43m
override _IBLUE		= \033[44m
override _IPURPLE	= \033[45m
override _ICYAN		= \033[46m
override _IWHITE	= \033[47m

override BIN		= bin
override SRC		= src
override INC		= includes

override COLOR		= color
override BITMAP		= bitmap
override CONV		= convert
override MAP		= map
override LIST		= list
override ITERAT		= iterator
override MATH		= math
override MATRIX		= matrix
override HASH		= hash
override MEMORY		= memory
override PRINT		= print
override STRING		= string
override TPOOL		= tpool
override UTIL		= util
override VECTOR3	= vector3
override QUADRIC	= quadric

override BITMAP_SRCS=	$(addprefix $(BITMAP)/,	\
				bmp_init.c				\
				bmp_set_pixel.c			\
				bmp_write.c				\
				)

override COLOR_SRCS	=	$(addprefix $(COLOR)/,	\
				color_add.c				\
				color_clone.c			\
				color_div.c				\
				color_from.c			\
				color_to.c				\
				color_mul.c				\
				color_sub.c				\
				color_deserialize.c		\
				)

override CONV_SRCS	=	$(addprefix $(CONV)/,	\
				ft_atoi.c				\
				ft_atoul.c			\
				ft_iton.c				\
				ft_iton_to.c			\
				ft_atof.c				\
				)

override ITERAT_SRCS=	$(addprefix $(ITERAT)/,	\
				iterator_has_next.c		\
				iterator_new.c			\
				iterator_next.c			\
				iterator_reset.c		\
				)

override MAP_SRCS	=	$(addprefix $(MAP)/, \
				map_contains.c			\
				map_destroy.c			\
				map_get.c				\
				map_new.c				\
				map_put.c				\
				map_remove.c			\
				map_copy.c				\
				map_sort.c				\
				)

override LIST_SRCS	=	$(addprefix $(LIST)/,	\
				as_array.c				\
				as_list.c				\
				lst_add_all.c			\
				lst_clear.c				\
				lst_concat.c			\
				lst_copy.c				\
				lst_delete.c			\
				lst_destroy.c			\
				lst_filter.c			\
				lst_first.c				\
				lst_foreach.c			\
				lst_get.c				\
				lst_get_entry.c			\
				lst_insert.c			\
				lst_is_empty.c			\
				lst_last.c				\
				lst_last_entry.c		\
				lst_map.c				\
				lst_new.c				\
				lst_new_entry.c			\
				lst_pop.c				\
				lst_push.c				\
				lst_reduce.c			\
				lst_remove.c			\
				lst_set.c				\
				lst_shift.c				\
				lst_shift_entry.c		\
				lst_size.c				\
				lst_slice.c				\
				lst_splice.c			\
				lst_unshift.c			\
				)

override MATH_SRCS	=	$(addprefix $(MATH)/,	\
				ft_abs.c				\
				ft_charlen.c			\
				ft_shortlen.c			\
				ft_intlen.c				\
				ft_longlen.c			\
				ft_longlonglen.c		\
				ft_max.c				\
				ft_min.c				\
				)

override MATRIX_SRCS=	$(addprefix $(MATRIX)/,	\
				matrix44.c				\
				)

override MEMORY_SRCS=	$(addprefix $(MEMORY)/,	\
				ft_bzero.c				\
				ft_calloc.c				\
				ft_memccpy.c			\
				ft_memchr.c				\
				ft_memcmp.c				\
				ft_memcpy.c				\
				ft_memmove.c			\
				ft_memset.c				\
				)

override PRINT_SRCS	=	$(addprefix $(PRINT)/,	\
				ft_putchar.c			\
				ft_putendl.c			\
				ft_puthex.c				\
				ft_putnbr.c				\
				ft_putstr.c				\
				)

override QUADRIC_SRCS=	$(addprefix $(QUADRIC)/,\
				resolve.c				\
				)

override STRING_SRCS=	$(addprefix $(STRING)/,	\
				ft_isalnum.c			\
				ft_isalpha.c			\
				ft_isascii.c			\
				ft_isdigit.c			\
				ft_isprint.c			\
				ft_split.c				\
				ft_strchr.c				\
				ft_strinsert.c			\
				ft_strdup.c				\
				ft_strindex_of.c		\
				ft_strjoin.c			\
				ft_strlcat.c			\
				ft_strcpy.c				\
				ft_strlen.c				\
				ft_strcmp.c				\
				ft_strmapi.c			\
				ft_strnstr.c			\
				ft_strtrim.c			\
				ft_substr.c				\
				ft_tolower.c			\
				ft_toupper.c			\
				ft_strto.c				\
				ft_strcnt.c				\
				str_is_empty.c			\
				str_append.c			\
				str_new.c				\
				str_remove.c			\
				)

override TPOOL_SRCS	=	$(addprefix $(TPOOL)/,	\
				pthread_name_ft.c	\
				tpool_add_work.c		\
				tpool_set_name.c		\
				tpool_destroy.c			\
				tpool_wait.c			\
				tpool_new.c				\
				)

override UTIL_SRCS	=	$(addprefix $(UTIL)/,	\
				ft_identity.c			\
				ft_ternary.c			\
				null_consumer.c			\
				)

override VECTOR3_SRCS=	$(addprefix $(VECTOR3)/,\
				vector3_add.c			\
				vector3_angle.c			\
				vector3_clone.c			\
				vector3_copy.c			\
				vector3_cross.c			\
				vector3_distance.c		\
				vector3_div.c			\
				vector3_negate.c		\
				vector3_dot.c			\
				vector3_length.c		\
				vector3_mul.c			\
				vector3_rotate.c		\
				vector3_new.c			\
				vector3_normalize.c		\
				vector3_set.c			\
				vector3_sub.c			\
				vec3_deserialize.c		\
				)


override SRCS		=					\
				$(BITMAP_SRCS)			\
				$(COLOR_SRCS)			\
				$(CONV_SRCS)			\
				$(MAP_SRCS)				\
				$(LIST_SRCS)			\
				$(ITERAT_SRCS)			\
				$(MATH_SRCS)			\
				$(MATRIX_SRCS)			\
				$(MEMORY_SRCS)			\
				$(PRINT_SRCS)			\
				$(STRING_SRCS)			\
				$(TPOOL_SRCS)			\
				$(UTIL_SRCS)			\
				$(VECTOR3_SRCS)			\
				$(QUADRIC_SRCS)			\

override OBJS		=	$(addprefix $(BIN)/, $($(join $(if $($(TYPE)_SRCS), $(TYPE)_)SRCS,:.c=.o)))

override HEADERS	=	$(addprefix $(INC)/, libft.h)

BAR						= 0

NAME					= libft.a

CC						= gcc
RM						= rm -rf

CFLAGS					= -Wall -Wextra -Werror
override MFLAGS			= --no-print-directory V_GLOBAL_COUNT=$(GLOBAL_COUNT) V_GLOBAL_COUNTER=$(GLOBAL_COUNTER)

GLOBAL_COUNTER			= $(or $(V_GLOBAL_COUNTER),0)
GLOBAL_COUNT			= $(or $(V_GLOBAL_COUNT),$(words $(OBJS)))
GLOBAL_COLOR			= $(_IGREEN)

TYPE					=
TYPE_NAME				=
TYPE_COLOR				= $(_IYELLOW)
TYPE_COUNTER			= 0
TYPE_COUNT				= $(words $(OBJS))

ifeq ($(BAR), 0)
override COMPILE_FILE	= tabs 6; \
			echo "$$(($(GLOBAL_COUNTER)*100/$(GLOBAL_COUNT)))%	$(_WHITE)❖$(_RESET) $(_BLUE)Compiling source $(_GREEN)$< $(_BLUE)→ $(_YELLOW)$@$(_RESET)\c"; \
			mkdir -p $(dir $@); \
			$(CC) $(CFLAGS) -c -o $@ $< -I $(INC) -O3; \
			echo " $(_GREEN)✓$(_RESET)";
else
override COMPILE_FILE	= tabs 6; \
			tput cuu1; \
			if [ $(TYPE_COUNTER) -gt 1 ]; then \
				tput cuu1; \
			fi; \
			tput el; \
			printf "$(TYPE_COLOR)%*.*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s $(_RED)%3d/%-3d $(_BLUE)($(_YELLOW)$<$(_BLUE))\n" \
				$$(($(TYPE_COUNTER)*50/$(TYPE_COUNT))) \
				$$(($(TYPE_COUNTER)*50/$(TYPE_COUNT))) \
				" " \
				$$((50 - ($(TYPE_COUNTER)*50/$(TYPE_COUNT)))) \
				$$((50 - ($(TYPE_COUNTER)*50/$(TYPE_COUNT)))) \
				" " $$(($(TYPE_COUNTER)*100/$(TYPE_COUNT))) \
				"$(or $(TYPE_NAME),$(TYPE))..." \
				$(TYPE_COUNTER) \
				$(TYPE_COUNT); \
			\
			tput el; \
			printf "$(GLOBAL_COLOR)%*.*s$(_IWHITE)%*.*s$(_RESET) $(_PURPLE)%3d%% $(_BLUE)Compiling %-15s $(_RED)%3d/%-3d  \n" \
				$$(($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT))) \
				$$(($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT))) \
				" " \
				$$((50 - ($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT)))) \
				$$((50 - ($(GLOBAL_COUNTER)*50/$(GLOBAL_COUNT)))) \
				" " \
				$$(($(GLOBAL_COUNTER)*100/$(GLOBAL_COUNT))) \
				"..." \
				$(GLOBAL_COUNTER) \
				$(GLOBAL_COUNT); \
			mkdir -p $(dir $@); \
			$(CC) $(CFLAGS) -c -o $@ $< -I $(INC); \
			if [ $(TYPE_COUNTER) -eq $(TYPE_COUNT) ]; then \
				tput cuu1; \
				tput cuu1; \
				tput el; \
				printf "$(TYPE_COLOR)%*s$(_RESET) $(_PURPLE)100%% $(_BLUE)Compiling %-15s $(_RESET)%3d/%-3d  $(_GREEN)done\n" \
				50 \
				" " \
				"$(or $(TYPE_NAME),$(TYPE))..." \
				$(TYPE_COUNTER) \
				$(TYPE_COUNT); \
				tput cud1; \
				if [ $(GLOBAL_COUNTER) -eq $(GLOBAL_COUNT) ]; then \
					tput cuu1; \
					tput el; \
					printf "$(GLOBAL_COLOR)%*s$(_RESET) $(_PURPLE)100%% $(_BLUE)Compiling %-15s $(_RESET)%3d/%-3d  $(_GREEN)done\n" \
					50 \
					" " \
					"..." \
					$(GLOBAL_COUNTER) \
					$(GLOBAL_COUNT); \
				fi; \
			fi;
endif

all:		$(NAME)
			@:

ball:
			@$(MAKE) $(MFLAGS) BAR=1

$(BIN)/$($(TYPE))/%.o: $(SRC)/$($(TYPE))/%.c $(HEADERS)
			$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+1))))
			$(eval TYPE_COUNTER=$(shell echo $$(($(TYPE_COUNTER)+1))))
			@$(COMPILE_FILE)

ifeq ($($(TYPE)_SRCS),)
$(NAME):	pre_compile compile post_compile
			@ar rcs $@ $(OBJS)
else
$(NAME):	$(OBJS)
endif

pre_compile:
			@echo "$(_BOLD)$(_CYAN)Compiling...$(_RESET)"
			@echo "\n\n"

define compile_type
			@$(MAKE) $(MFLAGS) TYPE=$1 TYPE_NAME=$2
			@$(eval GLOBAL_COUNTER=$(shell echo $$(($(GLOBAL_COUNTER)+$(words $($1_SRCS))))))
endef

compile:
			$(call compile_type,BITMAP,"bitmaps")
			$(call compile_type,COLOR,"colors")
			$(call compile_type,CONV,"converters")
			$(call compile_type,ITERAT,"iterators")
			$(call compile_type,MAP,"maps")
			$(call compile_type,LIST,"lists")
			$(call compile_type,MATH,"maths")
			$(call compile_type,MATRIX,"matrixs")
			$(call compile_type,MEMORY,"memories")
			$(call compile_type,PRINT,"prints")
			$(call compile_type,STRING,"strings")
			$(call compile_type,TPOOL,"thread pools")
			$(call compile_type,UTIL,"utils")
			$(call compile_type,VECTOR3,"3D vectors")
			$(call compile_type,QUADRIC,"quadrics")

post_compile:
			@echo "\n"
			@echo "$(_RED)Finished ! $(_RESET)($(_PURPLE)$(GLOBAL_COUNTER)$(_RESET) files compiled)$(_RESET)"

clean:
			@echo "🚮 $(_BOLD)$(_YELLOW)Deleting objects...$(_RESET)\n"
			@$(RM) $(OBJS)
			@find . -type d -empty -delete

fclean:		clean
			@echo "🚮 $(_BOLD)$(_RED)Deleting $(NAME)$(_RESET)\n"
			@$(RM) $(NAME)

re:			fclean all

bre:		fclean ball

.PHONY:		all ball clean fclean re bre pre_compile compile post_compile
