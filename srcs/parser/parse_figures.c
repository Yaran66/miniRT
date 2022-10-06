/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_figure.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

void	parse_sphere(t_list **elements, char **array)
{
	t_vector		*center;
	unsigned int	colors;
	float			diameter;

	if (array[0][2] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	if (ft_arraylen(array) != 4)
		error_exit(ELEMENT_PARAMS_ERROR);
//	printf("fm parse_figures.c, argument parse_plane %s %s %s %s\n", array[0],
//		   array[1], array[2], array[3]);
	center = parse_coordinates(array[1]);
	diameter = ft_atof(check_float_str(array[2]));
	colors = parse_colors(array[3]);
	ft_lstadd_back(elements, ft_lstnew(scene_element_new(SPHERE, \
			new_sphere(center, diameter / 2, colors))));
}

void	parse_plane(t_list **elements, char **array)
{
	t_vector		*point;
	t_vector		*normal;
	unsigned int	colors;

	if (array[0][2] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	if (ft_arraylen(array) != 4)
		error_exit(ELEMENT_PARAMS_ERROR);
//	printf("fm parse_figures.c, argument parse_plane %s %s %s %s\n", array[0],
//		   array[1], array[2], array[3]);
	point = parse_coordinates(array[1]);
	normal = parse_vector(array[2]);
	colors = parse_colors(array[3]);
	ft_lstadd_back(elements, ft_lstnew(scene_element_new(PLANE, \
			plane_new(point, normal, colors))));
}

void	parse_cylinder(t_list **elements, char **splitted_line)
{
	t_vector		*point;
	t_vector		*normal;
	float			diameter;
	float			height;
	unsigned int	colors;

	if (splitted_line[0][2] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	if (ft_arraylen(splitted_line) != 6)
		error_exit(ELEMENT_PARAMS_ERROR);
//	printf("fm parse_figures.c, argument parse_cylinder %s %s %s %s %s %s\n",
//		   splitted_line[0],
//		   splitted_line[1], splitted_line[2], splitted_line[3],
//		   splitted_line[4], splitted_line[5]);
	point = parse_coordinates(splitted_line[1]);
	normal = parse_vector(splitted_line[2]);
	diameter = ft_atof(splitted_line[3]);
	height = ft_atof(splitted_line[4]);
	colors = parse_colors(splitted_line[5]);
	ft_lstadd_back(elements, ft_lstnew(scene_element_new(CYLINDER, \
			cylinder_new(point, normal, \
			(t_cylinder_norminette){diameter / 2, height, colors}))));
}

void	parse_figures(t_list **elements, char **splitted_line)
{
//	printf("fm parse_figures.c, argument splitted_line only figure %s \n",
//		   splitted_line[0]);
	if (splitted_line[0][0] == 's' && splitted_line[0][1] == 'p')
		parse_sphere(elements, splitted_line);
	else if (splitted_line[0][0] == 'p' && splitted_line[0][1] == 'l')
		parse_plane(elements, splitted_line);
	else if (splitted_line[0][0] == 'c' && splitted_line[0][1] == 'y')
		parse_cylinder(elements, splitted_line);
	else
		error_exit(ELEMENT_PARAMS_ERROR);
}
