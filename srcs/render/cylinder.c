/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cylinder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:55:09 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_cylinder	*cylinder_new(t_vector *point, t_vector *normal,
							t_cylinder_norminette args)
{
	t_cylinder	*cylinder;

	cylinder = (t_cylinder *)malloc(sizeof(t_cylinder));
	if (!cylinder)
		error_exit(MALLOC_ERROR);
	cylinder->point = point;
	vec_norm(normal);
	cylinder->normal = normal;
	cylinder->args.radius = args.radius;
	cylinder->args.height = args.height;
	cylinder->args.hex_rgb = args.hex_rgb;
	return (cylinder);
}

static t_bool	ici_result(float *distance, float t, t_cylinder *cylinder, \
	t_ray *ray)
{
	*distance = t;
	if (intersect_cylinder_cap_1(cylinder, ray, distance))
		return (true);
	*distance = t;
	if (intersect_cylinder_cap_2(cylinder, ray, distance))
		return (true);
	*distance = t;
	return (false);
}

t_bool	is_cylinder_intersect(t_cylinder *cylinder, t_ray *ray, float *distance)
{
	float		t;
	float		m;
	t_vector	point;
	t_vector	vector_added;

	t = *distance;
	if (intersect_cylinder_pipe(cylinder, *ray, distance))
	{
		point = vector_add_stack(*ray->origin, \
			vector_scalar_multiple_stack(*ray->direction, *distance));
		vector_added = vector_subtract_stack(point, *cylinder->point);
		m = vec_dot_product(cylinder->normal, &vector_added);
		if (m > 0 && m < cylinder->args.height)
		{
			ray->point = point;
			ray->normal = vector_subtract_stack(ray->point, \
				vector_add_stack(*cylinder->point, \
					vector_scalar_multiple_stack(*cylinder->normal, m)));
			return (true);
		}
	}
	return (ici_result(distance, t, cylinder, ray));
}

t_bool	cylinder_find_intersection(t_cylinder *cylinder, t_ray *ray)
{
	float	distance;

	distance = ray->distance;
	if (is_cylinder_intersect(cylinder, ray, &distance) && \
		distance > EPSILON && distance < ray->distance)
	{
		ray->distance = distance;
		vec_norm(&ray->normal);
		ray->hex_rgb = cylinder->args.hex_rgb;
		return (true);
	}
	return (false);
}
