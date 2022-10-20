/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intersection.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:24:22 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:25:35 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERSECTION_H
# define INTERSECTION_H

void	find_nearest_intersection(t_filtered_elements elements, t_ray *ray);
t_bool	is_shadow_intersect(t_filtered_elements elements, t_ray *ray);

#endif
