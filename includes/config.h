/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   config.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:35:18 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
/*   Updated: 2022/09/26 22:39:09 by wdwain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONFIG_H
# define CONFIG_H

# define PBSTR "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||"
# define PBWIDTH 60

# define ESC_KEY_CODE 53 //65307 for Linux
# define WINDOW_NAME "miniRT"

# define WINDOW_WIDTH 400
# define WINDOW_HEIGHT 400

# define BLACK_COLOR 0x000000

# define EPSILON 1e-4

# define MALLOC_ERROR "Couldn't allocate memory."
# define FILE_EXT_ERROR "File extension should be *.rt"
# define ARGV_ERROR "Only 1 scene file allowed"
# define FILE_READ_ERROR "Can't open the file/fd"
# define PARSE_ERROR "Can't parse scene/file"
# define ELEMENT_PARAMS_ERROR "Wrong element's information."

typedef enum s_bool
{
	false,
	true
}			t_bool;

#endif //CONFIG_H
