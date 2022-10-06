/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:48:52 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
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

//# include "./../wdwain/mlx_linux/mlx.h"
//# include "./../wjasmine/mlx/mlx.h"
# include "../mlx/mlx.h"
# include "../mlx_linux/mlx.h"
# include "vector.h"
# include "utils.h"
# include "config.h"
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

//typedef enum s_bool
//{
//	false,
//	true
//}			t_bool;

//typedef struct s_list
//{
//	void			*content;
//	struct s_list	*next;
//}	t_list;

//typedef struct	s_vector
//{
//	float	x;
//	float	y;
//	float	z;
//}	t_vector;

#endif //MINIRT_H
