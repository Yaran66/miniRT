/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:19:58 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/14 11:20:00 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

static int	esc_key_hook(int keycode, t_list *scene_elements)
{
	if (keycode == ESC_KEY_CODE)
	{
		clear_scene(&scene_elements);
		exit(EXIT_SUCCESS);
	}
	return (0);
}

static int	cross_close_button(t_list *scene_elements)
{
	clear_scene(&scene_elements);
	exit(EXIT_SUCCESS);
	return (0);
}

void	register_all_hooks(t_mlx mlx, t_list *scene_elements)
{
	mlx_key_hook(mlx.mlx_win_ptr, esc_key_hook, scene_elements);
	mlx_hook(mlx.mlx_win_ptr, 17, 0, cross_close_button, scene_elements);
}
