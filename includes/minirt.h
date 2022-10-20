/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:48:52 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/18 17:51:29 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H
# define MINIRT_H

# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>
# include "../mlx/mlx.h"
# include "vector.h"
# include "utils.h"
# include "config.h"
# include "ray.h"
# include "sphere.h"
# include "camera.h"
# include "scene.h"
# include "mlx_struct.h"
# include "get_next_line.h"
# include "parser.h"
# include "color.h"
# include "ambient_light.h"
# include "light.h"
# include "cylinder.h"
# include "plane.h"
# include "view_plane.h"
# include "ray_tracing_struct.h"
# include "calc_pixel_color.h"
# include "intersection.h"
# include "camera_direction_calc.h"
# include "hooks.h"

#endif //MINIRT_H
