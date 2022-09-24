/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/23 11:20:06 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAMERA_H
# define CAMERA_H

typedef struct	s_camera
{
	t_vector	*origin;
	t_vector	*direction;
	float		fov;
}				t_camera;

t_camera		*new_cam(t_vector *origin, t_vector *direction, float fov);

#endif //CAMERA_H
