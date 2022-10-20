/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_vector	*new_vector(float x, float y, float z)
{
	t_vector	*vec;

	vec = (t_vector *)malloc(sizeof (t_vector));
	if (!vec)
	{
		error_exit(MALLOC_ERROR);
	}
	vec->x = x;
	vec->y = y;
	vec->z = z;
	return (vec);
}

t_vector	*vec_subtract(t_vector *vec1, t_vector *vec2)
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

t_vector	*vector_add(t_vector *a, t_vector *b)
{
	t_vector	*vector;

	vector = new_vector(a->x + b->x, a->y + b->y, a->z + b->z);
	return (vector);
}

t_vector	*vector_scalar_multiple(t_vector *a, float b)
{
	t_vector	*vector;

	vector = new_vector(a->x * b, a->y * b, a->z * b);
	return (vector);
}
