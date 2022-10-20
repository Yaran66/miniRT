/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

static void	ft_swap_float(float *a, float *b)
{
	float	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

t_sphere	*new_sphere(t_vector *center, float radius, unsigned int hex_rgb)
{
	t_sphere	*sphere;

	sphere = (t_sphere *)malloc(sizeof(t_sphere));
	if (!sphere)
	{
		error_exit(MALLOC_ERROR);
	}
	sphere->center = center;
	sphere->radius = radius;
	sphere->hex_rgb = hex_rgb;
	return (sphere);
}

t_bool	is_sphere_intersect(t_sphere *sphere, t_ray *ray)
{
	t_vector	*l;
	float		tca;
	float		d2;
	float		t1;
	float		distance;

	l = vec_subtract(sphere->center, ray->origin);
	tca = vec_dot_product(l, ray->direction);
	d2 = vec_dot_product(l, l) - powf(tca, 2);
	free(l);
	if (d2 > powf(sphere->radius, 2))
		return (false);
	distance = tca - sqrtf(powf(sphere->radius, 2) - d2);
	t1 = tca + sqrtf(powf(sphere->radius, 2) - d2);
	if (distance > t1)
		ft_swap_float(&distance, &t1);
	if (distance < 0.0)
		distance = t1;
	if (distance < 0.0 || distance < EPSILON || distance > ray->distance)
		return (false);
	ray->distance = distance;
	return (true);
}

t_bool	sphere_find_intersection(t_sphere *sphere, t_ray *ray)
{
	t_vector	*vector_multiplied;

	if (is_sphere_intersect(sphere, ray))
	{
		vector_multiplied = vector_scalar_multiple(ray->direction, \
														ray->distance);
		ray->point = vector_add_stack(*ray->origin, *vector_multiplied);
		free(vector_multiplied);
		ray->normal = vector_subtract_stack(ray->point, *sphere->center);
		vec_norm(&ray->normal);
		ray->hex_rgb = sphere->hex_rgb;
		return (true);
	}
	return (false);
}
