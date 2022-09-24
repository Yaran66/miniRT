/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sphere.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:47:23 by wdwain            #+#    #+#             */
/*   Updated: 2022/09/22 15:50:21 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPHERE_H
#define SPHERE_H

typedef struct	s_sphere
{
	t_vector	*center;
	float		radius;
	//unsigned int	hex_rgb;
}				t_sphere;

t_sphere	*new_sphere(t_vector *center, float radius);

#endif //SPHERE_H
