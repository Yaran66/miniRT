cmake_minimum_required(VERSION 3.20)
project(miniRT C)

set(CMAKE_C_STANDARD 99)

add_executable(miniRT includes/minirt.h includes/vector.h includes/config.h srcs/utils/error_exit.c includes/utils.h includes/sphere.h includes/camera.h includes/scene.h srcs/main.c includes/mlx_struct.h gnl/get_next_line.c gnl/get_next_line_utils.c includes/get_next_line.h srcs/parser/parse_scene.c includes/parser.h srcs/parser/parse.c srcs/parser/ft_split.c srcs/parser/parse_utils.c srcs/parser/parse_utils_2.c srcs/parser/color_hex.c includes/color.h srcs/utils/lists_operator.c srcs/render/scene.c srcs/render/ambient_light.c includes/ambient_light.h srcs/render/add_color.c srcs/parser/parse_utils_3.c srcs/render/vector.c srcs/render/camera.c srcs/render/light.c includes/light.h srcs/parser/parse_figures.c srcs/render/cylinder.c includes/cylinder.h srcs/render/sphere.c srcs/render/plane.c includes/plane.h)
