/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera_direction_calc.h                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:21:25 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:21:27 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAMERA_DIRECTION_CALC_H
# define CAMERA_DIRECTION_CALC_H

typedef struct s_matrix
{
	t_vector	vx;
	t_vector	vy;
	t_vector	vz;
}	t_matrix;

t_vector	camera_direction_calc(t_camera camera, int x, int y);

#endif //CAMERA_DIRECTION_CALC_H
