/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/23 17:03:16 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

t_scene	*new_scene(t_camera *cam, t_sphere *sphere)
{
	t_scene	*scene;

	scene = (t_scene *)malloc(sizeof(t_scene));
	if (!scene)
	{
		error_exit(MALLOC_ERROR);
//		error_exit(-1);
	}
	scene->sphere = sphere;
	scene->width = 0;
	scene->height = 0;
	return (scene);
}
