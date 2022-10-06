/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   light.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_light	*light_new(t_vector *center, float brightness, unsigned int hex_rgb)
{
	t_light	*light;

	light = (t_light *)malloc(sizeof(t_light));
	if (!light)
		error_exit(MALLOC_ERROR);
	light->center = center;
	light->brightness = brightness;
	light->hex_rgb = hex_rgb;
	printf("light.c center x=%f, y=%f, z=%f brigthness=%f, red=%i, green=%i, "
		   "blue=%i \n", light->center->x, light->center->y, light->center->z,
		   light->brightness, get_r_from_hex(light->hex_rgb),
		   get_g_from_hex (light->hex_rgb), get_b_from_hex
				   (light->hex_rgb) );
	return (light);
}

//float	calculate_light_intensity(t_vector *normal, t_vector *shadow_direction,
//								   t_light *light)
//{
//	float	n_dot_l;
//
//	n_dot_l = vector_dot_product(normal, shadow_direction);
//	if (n_dot_l <= 0)
//		return (0);
//	return (light->brightness * n_dot_l / (vector_length(shadow_direction)
//										   * vector_length(normal)));
//}
//
//unsigned int	calculate_light_color(t_light *light, unsigned int hex_rgb)
//{
//	return (hex_rgb_add(hex_rgb, \
//		hex_rgb_apply_brightness(light->hex_rgb, light->brightness)));
//}

