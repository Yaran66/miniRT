/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   light.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/14 11:25:41 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIGHT_H
# define LIGHT_H

typedef struct s_light
{
	t_vector		*center;
	float			brightness;
	unsigned int	hex_rgb;
}				t_light;

t_light			*light_new(t_vector *center, float brightness, \
				unsigned int hex_rgb);
float			calculate_light_intensity(t_vector *normal, \
				t_vector*shadow_direction, t_light *light);
unsigned int	calculate_light_color(t_light *light, unsigned int hex_rgb);

#endif
