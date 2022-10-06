/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_sphere	*new_sphere(t_vector *center, float radius, unsigned int hex_rgb)
{
	t_sphere	*sphere;

	sphere = (t_sphere *)malloc(sizeof(t_sphere));
	if (!sphere)
	{
//		error_exit(-1);
		error_exit(MALLOC_ERROR);
	}
	sphere->center = center;
	sphere->radius = radius;
	sphere->hex_rgb = hex_rgb;
	printf("sphere.c center x=%f, y=%f, z=%f , radius=%f, red=%i,"
		   " green=%i, blue=%i \n", sphere->center->x, sphere->center->y,
		   sphere->center->z, sphere->radius,
		   get_r_from_hex(sphere->hex_rgb), get_g_from_hex
				   (sphere->hex_rgb), get_b_from_hex(sphere->hex_rgb) );
	return (sphere);

}
