//
// Created by Aleksey Tvorogov on 02/10/2022.
//

#include "../../includes/minirt.h"

t_plane	*plane_new(t_vector *point, t_vector *normal, unsigned int hex_rgb)
{
	t_plane	*plane;

	plane = (t_plane *)malloc(sizeof(t_plane));
	if (!plane)
		error_exit(MALLOC_ERROR);
	plane->point = point;
	plane->normal = normal;
	plane->hex_rgb = hex_rgb;
	printf("plane.c point x=%f, y=%f, z=%f , normal x=%f, y=%f, z=%f, red=%i,"
		   " green=%i, blue=%i \n", plane->point->x, plane->point->y,
		   plane->point->z, plane->normal->x, plane->normal->y,
		   plane->normal->z, get_r_from_hex(plane->hex_rgb), get_g_from_hex
		   (plane->hex_rgb), get_b_from_hex(plane->hex_rgb) );
	return (plane);
}

//t_bool	is_plane_intersect(t_plane *plane, t_ray ray, float *distance)
//{
//	float		denominator;
//	t_vector	*diff;
//
//	denominator = vector_dot_product(plane->normal, ray.direction);
//	if ((fabs((double)denominator)) > EPSILON)
//	{
//		diff = vector_subtract(plane->point, ray.origin);
//		*distance = (vector_dot_product(diff, plane->normal)) / denominator;
//		free(diff);
//		if (*distance > EPSILON)
//			return (true);
//	}
//	return (false);
//}
//
//t_bool	plane_find_intersection(t_plane *plane, t_ray *ray)
//{
//	float		distance;
//	t_vector	*vector_multiplied;
//
//	distance = ray->distance;
//	if (is_plane_intersect(plane, *ray, &distance) && distance > EPSILON
//		&& distance < ray->distance)
//	{
//		ray->distance = distance;
//		vector_multiplied = vector_scalar_multiple(ray->direction,
//												   ray->distance);
//		ray->point = vector_add_stack(*ray->origin, *vector_multiplied);
//		free(vector_multiplied);
//		ray->normal = *plane->normal;
//		if (vector_dot_product(plane->normal, ray->direction) > 0)
//			ray->normal = vector_scalar_multiple_stack(ray->normal, -1);
//		vector_normalize(&ray->normal);
//		ray->hex_rgb = plane->hex_rgb;
//		return (true);
//	}
//	return (false);
//}