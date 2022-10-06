/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambient_light.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_ambient_light	*ambient_light_new(float brightness, unsigned int hex_rgb)
{
	t_ambient_light	*ambient_light;

	ambient_light = (t_ambient_light *)malloc(sizeof(t_ambient_light));
	if (!ambient_light)
		error_exit(MALLOC_ERROR);
	ambient_light->brightness = brightness;
	ambient_light->hex_rgb = hex_rgb;
//	printf("ambient_light.c brigthness=%f, red=%i, green=%i, blue=%i \n",
//		   ambient_light->brightness, get_r_from_hex(ambient_light->hex_rgb),
//		   get_g_from_hex (ambient_light->hex_rgb), get_b_from_hex
//		   (ambient_light->hex_rgb) );
	return (ambient_light);
}

float	calculate_ambient_intensity(t_list *ambient_lights)
{
	float			intensity_from_ambient_lights;
	t_ambient_light	*ambient_light;

	intensity_from_ambient_lights = 0;
	while (ambient_lights)
	{
		ambient_light = ambient_lights->content;
		intensity_from_ambient_lights += ambient_light->brightness;
		ambient_lights = ambient_lights->next;
	}
	return (intensity_from_ambient_lights);
}

unsigned int	calculate_ambient_color(t_list *ambient_lights,
										unsigned int hex_rgb)
{
	t_ambient_light	*ambient_light;

	while (ambient_lights)
	{
		ambient_light = ambient_lights->content;
		hex_rgb = hex_rgb_add(hex_rgb,
							  hex_rgb_apply_brightness(ambient_light->hex_rgb,
													   ambient_light->brightness));
		ambient_lights = ambient_lights->next;
	}
	return (hex_rgb);
}
