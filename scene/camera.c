/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/23 11:32:22 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

t_camera		*new_cam(t_vector *origin, t_vector *direction, float fov)
{
	t_camera	*cam;

	cam = (t_camera *)malloc(sizeof(t_camera));
	if (!cam)
	{
		error_exit(MALLOC_ERROR);
//		error_exit(-1);
	}
	cam->origin = origin;
	cam->direction = direction;
	cam->fov = fov;
	return (cam);
}