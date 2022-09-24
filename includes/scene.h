/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/23 17:12:56 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCENE_H
#define SCENE_H

typedef struct	s_scene
{
	t_camera	*cams;
	t_sphere	*sphere;
	float		width;
	float		height;
}				t_scene;

t_scene	*new_scene(t_camera *cam, t_sphere *sphere);

#endif //SCENE_H
