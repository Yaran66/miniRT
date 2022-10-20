/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:20:11 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:20:12 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_vplane	*get_view_plane(float width, float height,
							unsigned int fov_angle)
{
	t_vplane	*vplane;
	float		aspect_ratio;

	vplane = (t_vplane *)malloc(sizeof(t_vplane));
	if (!vplane)
		error_exit(MALLOC_ERROR);
	aspect_ratio = width / height;
	vplane->width = 2 * tanf(fov_angle / 2 * M_PI / 180);
	vplane->height = vplane->width / aspect_ratio;
	vplane->x_pixel = vplane->width / width;
	vplane->y_pixel = vplane->height / height;
	return (vplane);
}

t_mlx_img	mlx_img_new(t_mlx mlx, int width, int height)
{
	t_mlx_img	image;

	image.img = mlx_new_image(mlx.mlx_ptr, width, height);
	image.addr = mlx_get_data_addr(image.img, &image.bits_per_pixel, \
		&image.line_length, &image.endian);
	return (image);
}
