cmake_minimum_required(VERSION 3.20)
project(miniRT C)

set(CMAKE_C_STANDARD 99)

add_executable(miniRT main.c includes/minirt.h srcs/geometry/vector.c includes/vector.h includes/config.h srcs/utils/error_exit.c includes/utils.h includes/sphere.h srcs/figures/sphere.c scene/camera.c includes/camera.h includes/scene.h scene/scene.c srcs/main.c)
