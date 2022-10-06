NAME		= miniRT

CC			= cc
RM			= rm -rf
#CFLAGS		= -Wall -Werror -Wextra -I$(DIR_HEADERS) -MMD -O3
CFLAGS		= -I$(DIR_HEADERS) -MMD -O3

DIR_HEADERS	= includes/

SRCS_DIR	= srcs/

SRCS			= $(addprefix $(SRCS_DIR), main.c)
PARSING_DIR		= $(addprefix $(SRCS_DIR), parser/)
RENDER_DIR		= $(addprefix $(SRCS_DIR), render/)
UTILS_DIR		= $(addprefix $(SRCS_DIR), utils/)

GNL_DIR			= gnl/
GNL_FILES		= get_next_line.c \
					get_next_line_utils.c

SRCS_PARSER		= color_hex.c \
					ft_split.c \
					parse.c \
					parse_figures.c \
					parse_scene.c \
					parse_utils.c \
					parse_utils_2.c \
					parse_utils_3.c

SRCS_RENDER		= add_color.c \
					ambient_light.c \
					camera.c \
					cylinder.c \
					light.c \
					plane.c \
					scene.c \
					sphere.c \
					vector.c
SRCS_UTILS		= error_exit.c \
					lists_operator.c

SRCS			+= $(addprefix $(PARSING_DIR), $(SRCS_PARSER)) \
					$(addprefix $(RENDER_DIR), $(SRCS_RENDER)) \
					$(addprefix $(UTILS_DIR), $(SRCS_UTILS)) \
					$(addprefix $(GNL_DIR), $(GNL_FILES))


OBJS_DIR		= objs/
OBJS			= $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

MLX_DIR			= mlx_linux/
MLX_FLAGS_LINUX	= -L$(MLX_DIR) -lmlx_Linux -L/usr/lib -I$(MLX_DIR) -lXext -lX11 -lm -lz
MLX_FLAGS_MAC	= -L$(MLX_DIR) -lmlx_Darwin -L/usr/lib -I$(MLX_DIR) -lXext -lX11 -lm -lz
LIBMLX			= $(addprefix $(MLX_DIR), libmlx_Linux)

SRCS			+= $(addprefix $(GNL_DIR), $(GNL_FILES))

OS				= $(shell uname -s)

ifeq ($(OS), Darwin)
	MLX_FLAGS = $(MLX_FLAGS_MAC)
endif
ifeq ($(OS), Linux)
	MLX_FLAGS = $(MLX_FLAGS_LINUX)
endif


.PHONY:		all clean fclean re norm

all:		$(OBJS_DIR) $(LIBMLX) $(NAME)

$(OBJS_DIR):
				mkdir -p $(addprefix $(OBJS_DIR), $(GNL_DIR))
				mkdir -p $(addprefix $(OBJS_DIR), $(PARSING_DIR))
				mkdir -p $(addprefix $(OBJS_DIR), $(RENDER_DIR))
				mkdir -p $(addprefix $(OBJS_DIR), $(UTILS_DIR))

$(LIBMLX):
				chmod +x $(addprefix $(MLX_DIR), configure)
				make all --directory $(MLX_DIR)


$(NAME):	$(OBJS) $(DIR_HEADERS) $(GNL_DIR)
			$(CC) $(OBJS) $(CFLAGS) $(MLX_FLAGS) -o $(NAME)

$(OBJS_DIR)%.o:		%.c $(DIR_HEADERS) $(GNL_DIR) Makefile
			$(CC) $(CFLAGS) -I/usr/include -I$(MLX_DIR) -c $< -o $@

clean:
			$(RM) $(OBJS_DIR)
			make clean --directory $(MLX_DIR)

fclean:		clean
			$(RM) $(NAME)
			make clean --directory $(MLX_DIR)

re:			fclean all

norm:
				find . -name "*.c" -or -name "*.h" | grep --invert-match $(MLX_DIR) | xargs norminette