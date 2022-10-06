/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
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

typedef enum e_scene_element_type
{
	AMBIENT_LIGHTNING,
	CAMERA,
	LIGHT,
	SPHERE,
	PLANE,
	CYLINDER,
}	t_scene_element_type;

typedef struct s_filtered_elements
{
	t_list	*ambient_lights;
	t_list	*cameras;
	t_list	*lights;
	t_list	*spheres;
	t_list	*planes;
	t_list	*cylinders;
}				t_filtered_elements;

typedef struct s_scene_element
{
	t_scene_element_type	type;
	void					*data;
}				t_scene_element;

typedef struct s_element_exists
{
	t_bool	ambient_light;
	t_bool	camera;
	t_bool	light;
	//t_bool	multi_ambient_light; //need for bonus??
	//t_bool	multi_light; //need for bonus??
}	t_element_exists;


// srcs/render/scene.c
t_scene_element		*scene_element_new(t_scene_element_type type, void *data);
t_list				*filter_scene_elements(t_list *scene_elements,
											 t_scene_element_type type);
t_filtered_elements	filtered_elements_new(t_list *scene_elements);

t_scene	*new_scene(t_camera *cam, t_sphere *sphere);

#endif //SCENE_H
