/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:29:10 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:29:12 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

void	find_nearest_intersection(t_filtered_elements elements, t_ray *ray)
{
	while (elements.spheres)
	{
		sphere_find_intersection((t_sphere *) elements.spheres->content, ray);
		elements.spheres = elements.spheres->next;
	}
	while (elements.planes)
	{
		plane_find_intersection((t_plane *) elements.planes->content, ray);
		elements.planes = elements.planes->next;
	}
	while (elements.cylinders)
	{
		cylinder_find_intersection((t_cylinder *) elements.cylinders->content, \
													ray);
		elements.cylinders = elements.cylinders->next;
	}
}

t_bool	is_shadow_intersect(t_filtered_elements elements, t_ray *ray)
{
	while (elements.spheres)
	{
		if (sphere_find_intersection((t_sphere *) elements.spheres->content, \
													ray))
			return (true);
		elements.spheres = elements.spheres->next;
	}
	while (elements.planes)
	{
		if (plane_find_intersection((t_plane *) elements.planes->content, ray))
			return (true);
		elements.planes = elements.planes->next;
	}
	while (elements.cylinders)
	{
		if (cylinder_find_intersection((t_cylinder *) \
											elements.cylinders->content, ray))
			return (true);
		elements.cylinders = elements.cylinders->next;
	}
	return (false);
}
