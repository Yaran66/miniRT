NAME = miniRT

DIR_HEADERS	= ./includes/
DIR_SRCS	= ./srcs/
SRC			= geometry/vector.c \
			utils/error_exit.c \
			main.c \

SRCS		= $(addprefix $(DIR_SRCS), $(SRC))

OBJS		= $(SRCS:.c=.o)

LIBMLX		= libmlx.dylib

CC			= clang
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror
MLXFLAGS	= -lmlx -lXext -lX11

all:		$(NAME)

$(NAME):	$(OBJS)
			make -C ./minilibx_linux
			cp ./minilibx_linux/libmlx.dylib .
			$(CC) $(CFLAGS) $(MLXFLAGS) -I $(DIR_HEADERS) $(LIBMLX) $(OBJS) -o $(NAME)

%.o:		%.c
			$(CC) $(CFLAGS) -I $(DIR_HEADERS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all