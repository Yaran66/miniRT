/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:20:32 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:20:33 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_ray	ray_new(t_vector *origin, t_vector *direction)
{
	t_ray	ray;

	ray.origin = origin;
	ray.direction = direction;
	ray.normal = (t_vector){0, 0, 0};
	ray.point = (t_vector){0, 0, 0};
	ray.distance = INFINITY;
	ray.hex_rgb = NAN;
	return (ray);
}
