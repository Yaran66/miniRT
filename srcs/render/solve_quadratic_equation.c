/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_quadratic_equation.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:20:41 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:20:42 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

float	*solve_quadratic_equation(float a, float b, float c)
{
	float	*result;
	float	discriminant;

	result = (float *)malloc(sizeof(float) * 2);
	if (!result)
		error_exit(MALLOC_ERROR);
	result[0] = NAN;
	result[1] = NAN;
	discriminant = b * b - 4 * a * c;
	if (discriminant < EPSILON)
		return (result);
	result[0] = (-b - sqrtf(discriminant)) / (2 * a);
	result[1] = (-b + sqrtf(discriminant)) / (2 * a);
	return (result);
}
