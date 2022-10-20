/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

//srcs/parser/color_hex.c
unsigned int	rgb_to_hex(unsigned int r, unsigned int g, unsigned int b);
unsigned int	get_r_from_hex(unsigned int hex_rgb);
unsigned int	get_g_from_hex(unsigned int hex_rgb);
unsigned int	get_b_from_hex(unsigned int hex_rgb);

//srcs/render/add_color.c
unsigned int	hex_rgb_apply_brightness(unsigned int hex_rgb, \
				float brightness);
unsigned int	hex_rgb_add(unsigned int hex_rgb1, unsigned int hex_rgb2);

#endif //COLOR_H
