/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camera.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

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
	printf("camera.c view point x=%f, y=%f, z=%f , orientation x=%f, "
		   "y=%f, z=%f fov=%f,  \n", cam->origin->x, cam->origin->y,
		   cam->origin->z, cam->direction->x, cam->direction->y,
		   cam->direction->z, cam->fov);
	return (cam);
}
