//
// Created by Aleksey Tvorogov on 22/09/2022.
//
#include "../../includes/minirt.h"

t_vector	*new_vector(float x, float y, float z)
{
	t_vector	*vec;

	vec = (t_vector *)(sizeof (t_vector));
	if (!vec)
	{
		error_exit(MALLOC_ERROR);
//		error_exit(-1);
	}
	vec->x = x;
	vec->y = y;
	vec->z = z;
	return (vec);
}

t_vector	*vec_substract(t_vector *vec1, t_vector *vec2)
{
	t_vector	*res;

	res = new_vector(vec1->x - vec2->x, vec1->y - vec2->y, vec1->z - vec2->z);
	return (res);
}

float	vec_length(t_vector *vec)
{
	float	res;

	res = sqrt((vec->x * vec->x) + (vec->y * vec->y) + (vec->z * vec->z));
	return (res);
}

void	vec_norm(t_vector *vec)
{
	float	len;

	len = vec_length(vec);
	vec->x /= len;
	vec->y /= len;
	vec->z /= len;
}

float	vec_dot_product(t_vector *vec1, t_vector *vec2)
{
	float	res;

	res = ((vec1->x * vec2->x) + (vec1->y * vec2->y) + (vec1->z * vec2->z));
	return (res);
}