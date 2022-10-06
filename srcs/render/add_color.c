/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/27 19:40:25 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../includes/minirt.h"

static unsigned int	limit_color(unsigned int color)
{
	if (color < 0)
		return (0);
	if (color > 255)
		return (255);
	return (color);
}

unsigned int	hex_rgb_apply_brightness(unsigned int hex_rgb, float brightness)
{
	unsigned int	r;
	unsigned int	g;
	unsigned int	b;

	r = limit_color((unsigned int)((float)get_r_from_hex(hex_rgb)
								   * brightness));
	g = limit_color((unsigned int)((float)get_g_from_hex(hex_rgb)
								   * brightness));
	b = limit_color((unsigned int)((float)get_b_from_hex(hex_rgb)
								   * brightness));
	return (rgb_to_hex(r, g, b));
}

unsigned int	hex_rgb_add(unsigned int hex_rgb1, unsigned int hex_rgb2)
{
	unsigned int	r;
	unsigned int	g;
	unsigned int	b;

	r = limit_color(get_r_from_hex(hex_rgb1) + get_r_from_hex(hex_rgb2));
	g = limit_color(get_g_from_hex(hex_rgb1) + get_g_from_hex(hex_rgb2));
	b = limit_color(get_b_from_hex(hex_rgb1) + get_b_from_hex(hex_rgb2));
	return (rgb_to_hex(r, g, b));
}
