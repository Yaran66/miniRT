/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:20:47 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:20:48 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_vector	vector_add_stack(t_vector a, t_vector b)
{
	return ((t_vector){a.x + b.x, a.y + b.y, a.z + b.z});
}

t_vector	vector_subtract_stack(t_vector a, t_vector b)
{
	return ((t_vector){a.x - b.x, a.y - b.y, a.z - b.z});
}

t_vector	vector_scalar_multiple_stack(t_vector a, float b)
{
	return ((t_vector){a.x * b, a.y * b, a.z * b});
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
