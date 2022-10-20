/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

static void	parse_ambient_light(t_list **elements, char **array, \
									t_element_exists *element_exists)
{
	float			brightness;
	unsigned int	colors;

	if (array[0][0] == 'A' && element_exists->ambient_light == true)
		error_exit(ELEMENT_PARAMS_ERROR);
	if (array[0][1] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	if (ft_arraylen(array) != 3)
		error_exit(ELEMENT_PARAMS_ERROR);
	brightness = ft_atof(check_float_str(array[1]));
	if (!(brightness >= 0.0 && brightness <= 1.0))
		error_exit(ELEMENT_PARAMS_ERROR);
	colors = parse_colors(array[2]);
	ft_lstadd_back(elements, ft_lstnew(scene_element_new(AMBIENT_LIGHTNING, \
			ambient_light_new(brightness, colors))));
	if (array[0][0] == 'A')
		element_exists->ambient_light = true;
}

static void	parse_camera(t_list **elements, char **array,
							t_element_exists *element_exists)
{
	t_vector			*coordinates;
	t_vector			*vector;
	unsigned int		angle;

	if (element_exists->camera == true)
		error_exit(ELEMENT_PARAMS_ERROR);
	if (array[0][1] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	if (ft_arraylen(array) != 4)
		error_exit(ELEMENT_PARAMS_ERROR);
	coordinates = parse_coordinates(array[1]);
	vector = parse_vector(array[2]);
	angle = ft_atoi(check_int_str(array[3]));
	if (!(angle >= 0 && angle <= 180))
		error_exit(ELEMENT_PARAMS_ERROR);
	ft_lstadd_back(elements, ft_lstnew(scene_element_new(CAMERA, \
			new_cam(coordinates, vector, angle))));
	element_exists->camera = true;
}

static void	parse_light(t_list	**elements, char **array, \
							t_element_exists *element_exists)
{
	t_vector		*point;
	float			brightness;
	unsigned int	colors;

	if (array[0][0] == 'L' && element_exists->light == true)
		error_exit(ELEMENT_PARAMS_ERROR);
	if (array[0][1] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	if (ft_arraylen(array) != 4)
		error_exit(ELEMENT_PARAMS_ERROR);
	point = parse_coordinates(array[1]);
	brightness = ft_atof(check_float_str(array[2]));
	if (!(brightness >= 0.0 && brightness <= 1.0))
		error_exit(ELEMENT_PARAMS_ERROR);
	colors = parse_colors(array[3]);
	ft_lstadd_back(elements, ft_lstnew(scene_element_new(LIGHT, \
			light_new(point, brightness, colors))));
	if (array[0][0] == 'L')
		element_exists->light = true;
}

void	parse(t_list **elements, char *line,
				t_element_exists *element_exists)
{
	char	**splitted_line;

	if (line[0] == '\n')
		return ;
	splitted_line = ft_split(line, ' ');
	if (splitted_line == NULL)
		error_exit(PARSE_ERROR);
	else if (splitted_line[0][0] == 'A')
		parse_ambient_light(elements, splitted_line, element_exists);
	else if (splitted_line[0][0] == 'C')
		parse_camera(elements, splitted_line, element_exists);
	else if (splitted_line[0][0] == 'L')
		parse_light(elements, splitted_line, element_exists);
	else
	{
		parse_figures(elements, splitted_line);
	}
	ft_free_array(splitted_line);
}
