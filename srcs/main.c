/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/05 09:49:02 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minirt.h"

void	confirm_rt(char *filename)
{
	int	length;

	length = ft_strlen(filename) - 1;
	//printf("length" "%d", length);
	if ((filename[length - 2] != '.') || (filename[length - 1] != 'r')
		|| (filename[length] != 't') || length < 3)
		error_exit(FILE_EXT_ERROR);
}

int	main(int argc, char **argv)
{
	t_mlx				mlx;
	t_list				*scene_elements;
//	t_filtered_elements	filtered_elements;

	if (argc != 2)
		error_exit(ARGV_ERROR);
	confirm_rt(argv[1]);
	scene_elements = parse_scene(argv[1]);
//	mlx.mlx_ptr = mlx_init();
//	filtered_elements = filtered_elements_new(scene_elements);
//	ray_tracing(&mlx, filtered_elements);
//	register_all_hooks(mlx, scene_elements);
//	mlx_loop(mlx.mlx_ptr);
//	//clear_scene(&scene_elements);// free all malloc
//	exit(EXIT_SUCCESS);
	return (0);
}
