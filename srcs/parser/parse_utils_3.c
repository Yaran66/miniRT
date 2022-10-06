/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

t_vector	*parse_coordinates(char *array)
{
	char	**coordinates;
	float	x;
	float	y;
	float	z;

	check_commas(array);
	coordinates = ft_split(array, ',');
	if (coordinates == NULL)
		error_exit(PARSE_ERROR);
	if (ft_arraylen(coordinates) != 3)
		error_exit(ELEMENT_PARAMS_ERROR);
	x = ft_atof(check_float_str(coordinates[0]));
	y = ft_atof(check_float_str(coordinates[1]));
	z = ft_atof(check_float_str(coordinates[2]));
	ft_free_array(coordinates);
	return (new_vector(x, y, z));
}

t_vector	*parse_vector(char *array)
{
	char	**vector;
	float	x;
	float	y;
	float	z;

	check_commas(array);
	vector = ft_split(array, ',');
	if (vector == NULL)
		error_exit(PARSE_ERROR);
	if (ft_arraylen(vector) != 3)
		error_exit(ELEMENT_PARAMS_ERROR);
	x = ft_atof(check_float_str(vector[0]));
	y = ft_atof(check_float_str(vector[1]));
	z = ft_atof(check_float_str(vector[2]));
	if (!(x >= -1.0 && x <= 1.0) || !(y >= -1.0 && y <= 1.0)
		|| !(z >= -1.0 && z <= 1.0))
		error_exit(ELEMENT_PARAMS_ERROR);
	ft_free_array(vector);
	return (new_vector(x, y, z));
}