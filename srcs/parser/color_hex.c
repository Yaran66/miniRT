//
// Created by Aleksey Tvorogov on 26/09/2022.
//

#include "../../includes/minirt.h"

unsigned int	rgb_to_hex(unsigned int r, unsigned int g, unsigned int b)
{
	return (r << 16 | g << 8 | b);
}

unsigned int	get_r_from_hex(unsigned int hex_rgb)
{
	unsigned int	result;

	result = (hex_rgb & (255 << 16));
	return (result >> 16);
}

unsigned int	get_g_from_hex(unsigned int hex_rgb)
{
	unsigned int	result;

	result = (hex_rgb & (255 << 8));
	return (result >> 8);
}

unsigned int	get_b_from_hex(unsigned int hex_rgb)
{
	return (hex_rgb & 255);
}