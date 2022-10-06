/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cylinder.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 23:55:09 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CYLINDER_H
#define CYLINDER_H

typedef struct s_cylinder_norminette
{
	float			radius;
	float			height;
	unsigned int	hex_rgb;
}		t_cylinder_norminette;

typedef struct s_cylinder
{
	t_vector				*point;
	t_vector				*normal;
	t_cylinder_norminette	args;
}				t_cylinder;

t_cylinder	*cylinder_new(t_vector *point, t_vector *normal, \
							t_cylinder_norminette args);

//t_bool		is_cylinder_intersect(t_cylinder *cylinder, t_ray *ray,
//									float *distance);
//t_bool		cylinder_find_intersection(t_cylinder *cylinder, t_ray *ray);
//t_bool		intersect_cylinder_cap_1(t_cylinder *cylinder, t_ray *ray, \
//	float *distance);
//t_bool		intersect_cylinder_cap_2(t_cylinder *cylinder, t_ray *ray, \
//	float *distance);
//t_bool		intersect_cylinder_pipe(t_cylinder *cylinder, t_ray ray, \
//	float *distance);

#endif //CYLINDER_H
