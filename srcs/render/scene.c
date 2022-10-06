/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scene.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/27 19:22:22 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_scene_element	*scene_element_new(t_scene_element_type type, void *data)
{
	t_scene_element	*scene_element;

	scene_element = (t_scene_element *)malloc(sizeof(t_scene_element));
	if (!scene_element)
		error_exit(MALLOC_ERROR);
	scene_element->type = type;
	scene_element->data = data;
	return (scene_element);
}

t_list	*filter_scene_elements(t_list *scene_elements,
								 t_scene_element_type type)
{
	t_list			*picked_elements;
	t_scene_element	*el;

	picked_elements = NULL;
	while (scene_elements)
	{
		el = scene_elements->content;
		if (el->type == type)
			ft_lstadd_back(&picked_elements, ft_lstnew(el->data));
		scene_elements = scene_elements->next;
	}
	return (picked_elements);
}

t_filtered_elements	filtered_elements_new(t_list *scene_elements)
{
	t_filtered_elements	filtered_elements;

	filtered_elements.ambient_lights = filter_scene_elements(scene_elements,
															 AMBIENT_LIGHTNING);
	filtered_elements.cameras = filter_scene_elements(scene_elements, CAMERA);
	filtered_elements.lights = filter_scene_elements(scene_elements, LIGHT);
	filtered_elements.spheres = filter_scene_elements(scene_elements, SPHERE);
	filtered_elements.planes = filter_scene_elements(scene_elements, PLANE);
	filtered_elements.cylinders = filter_scene_elements(scene_elements,
														CYLINDER);
	return (filtered_elements);
}