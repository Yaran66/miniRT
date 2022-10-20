/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray_tracing_struct.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:26:10 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:26:11 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_TRACING_STRUCT_H
# define RAY_TRACING_STRUCT_H

typedef struct s_ray_tracing
{
	int			mlx_x;
	int			mlx_y;
	float		x_angle;
	float		y_angle;
	float		x_ray;
	float		y_ray;
	t_vplane	*vplane;
	t_mlx_img	image;
	t_camera	*camera;
}				t_ray_tracing;

#endif //RAY_TRACING_STRUCT_H
