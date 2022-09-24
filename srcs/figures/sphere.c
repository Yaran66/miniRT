/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/22 15:48:38 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_sphere	*new_sphere(t_vector *center, float radius)
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
	//sphere->hex_rgb = hex_rgb;
	return (sphere);

}