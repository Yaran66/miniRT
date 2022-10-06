/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   light.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHT_H
#define LIGHT_H

typedef struct s_light
{
	t_vector		*center;
	float			brightness;
	unsigned int	hex_rgb;
}				t_light;

t_light			*light_new(t_vector *center, float brightness,
							  unsigned int hex_rgb);
float			calculate_light_intensity(t_vector *normal,
										   t_vector *shadow_direction, t_light *light);
unsigned int	calculate_light_color(t_light *light, unsigned int hex_rgb);

#endif //LIGHT_H
