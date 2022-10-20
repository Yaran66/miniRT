/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_plane.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:26:32 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:26:34 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VIEW_PLANE_H
# define VIEW_PLANE_H

typedef struct s_vplane
{
	float	width;
	float	height;
	float	x_pixel;
	float	y_pixel;
}				t_vplane;

t_vplane	*get_view_plane(float width, float height, \
							unsigned int fov_angle);
void		ray_tracing(t_mlx *mlx, \
						t_filtered_elements elements);

#endif //MINIRT_VIEW_PLANE_H
