/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:26:16 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:26:17 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_H
# define RAY_H

typedef struct s_ray
{
	t_vector		*origin;
	t_vector		*direction;
	unsigned int	hex_rgb;
	float			distance;
	t_vector		normal;
	t_vector		point;
}					t_ray;

t_ray	ray_new(t_vector *origin, t_vector *direction);

#endif //RAY_H
