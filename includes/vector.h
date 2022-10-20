/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:55:09 by wdwain            #+#    #+#             */
/*   Updated: 2022/07/27 19:31:06 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_H
# define VECTOR_H

typedef struct s_vector
{
	float	x;
	float	y;
	float	z;
}				t_vector;

t_vector	*new_vector(float x, float y, float z);
t_vector	*vec_subtract(t_vector *vec1, t_vector *vec2);
t_vector	*vector_add(t_vector *a, t_vector *b);
t_vector	*vector_scalar_multiple(t_vector *a, float b);
float		vec_length(t_vector *vec);

// vector_stack.c
t_vector	vector_add_stack(t_vector a, t_vector b);
t_vector	vector_subtract_stack(t_vector a, t_vector b);
t_vector	vector_scalar_multiple_stack(t_vector a, float b);
void		vec_norm(t_vector *vec);
float		vec_dot_product(t_vector *vec1, t_vector *vec2);

#endif //VECTOR_H
