/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambient_light.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/27 12:06:02 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMBIENT_LIGHT_H
# define AMBIENT_LIGHT_H

typedef struct s_ambient_light
{
	float			brightness;
	unsigned int	hex_rgb;
}				t_ambient_light;

t_ambient_light	*ambient_light_new(float brightness, unsigned int hex_rgb);

float			calculate_ambient_intensity(t_list *ambient_lights);
unsigned int	calculate_ambient_color(t_list *ambient_lights, \
				unsigned int hex_rgb);

#endif //AMBIENT_LIGHT_H
