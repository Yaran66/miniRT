NAME		= miniRT

CC			= cc
RM			= rm -rf

#CFLAGS		= -I$(DIR_HEADERS) -MMD -O3
CFLAGS		= -Wall -Werror -Wextra -I$(DIR_HEADERS) -MMD -O3
MLX_F		= font.c font.xcf mlx_init_loop.m \
              mlx_int.h mlx_int_str_to_wordtab.c mlx_mouse.m \
              mlx_new_image.m mlx_new_window.h mlx_new_window.m \
              mlx_opengl.h mlx_opengl.m mlx_png.c \
              mlx_png.h mlx_rgb.c mlx_shaders.c \
              mlx_xpm.c

MLX_DIR		= mlx/
MLX_DIR_LINUX		= mlx_linux/
MLX_H		= $(addprefix $(MLX_DIR), mlx.h)
MLX			= $(addprefix $(MLX_DIR), libmlx.a)
MLX_FLS		= $(addprefix $(MLX_DIR), $(MLX_F))
MLX_FLAGS	= -Lmlx -lmlx -framework OpenGL -framework AppKit

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
					vector.c \
					ray_tracing.c \
					ray.c \
					mlx_image.c \
					calc_pixel_color.c \
					vector_stack.c \
					cylinder_caps_pipe.c \
					intersection.c \
					solve_quadratic_equation.c \
					camera_direction_calc.c \
					hooks.c
SRCS_UTILS		= error_exit.c \
					lists_operator.c

SRCS			+= $(addprefix $(PARSING_DIR), $(SRCS_PARSER)) \
					$(addprefix $(RENDER_DIR), $(SRCS_RENDER)) \
					$(addprefix $(UTILS_DIR), $(SRCS_UTILS)) \
					$(addprefix $(GNL_DIR), $(GNL_FILES))


OBJS_DIR		= objs/
OBJS			= $(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

.PHONY:		all clean fclean re norm

all:		$(OBJS_DIR) $(MLX) $(NAME)

$(MLX):		$(MLX_H) $(MLX_FLS)
			make -C $(MLX_DIR)

$(OBJS_DIR):
				mkdir -p $(addprefix $(OBJS_DIR), $(GNL_DIR))
				mkdir -p $(addprefix $(OBJS_DIR), $(PARSING_DIR))
				mkdir -p $(addprefix $(OBJS_DIR), $(RENDER_DIR))
				mkdir -p $(addprefix $(OBJS_DIR), $(UTILS_DIR))


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
