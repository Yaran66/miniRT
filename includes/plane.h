//
// Created by Aleksey Tvorogov on 02/10/2022.
//

#ifndef PLANE_H
#define PLANE_H

typedef struct s_plane
{
	t_vector		*point;
	t_vector		*normal;
	unsigned int	hex_rgb;
}				t_plane;

t_plane	*plane_new(t_vector *point, t_vector *normal, unsigned int hex_rgb);

//t_bool	is_plane_intersect(t_plane *plane, t_ray ray, float *distance);
//t_bool	plane_find_intersection(t_plane *plane, t_ray *ray);

#endif //MINIRT_PLANE_H
