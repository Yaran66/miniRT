/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_struct.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/09/24 18:36:22 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MLX_STRUCT_H
# define MLX_STRUCT_H

typedef struct s_mlx
{
	void	*mlx_ptr;
	void	*mlx_win_ptr;
}				t_mlx;

typedef struct s_mlx_img
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_mlx_img;

t_mlx_img	mlx_img_new(t_mlx mlx_ptr, int width, int height);

#endif //MLX_STRUCT_H
