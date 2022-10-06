/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_scene.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

static void	read_parse_file(int fd, t_list **elements,
									 t_element_exists *element_exists)
{
	char	*line;

	line = NULL;
	while (1)
	{
		if (line != NULL)
			free(line);
		line = get_next_line(fd);
		if (line == NULL)
			break ;
		if (line[ft_strlen(line) - 1] == '\n')
			line[ft_strlen(line) - 1] = '\0';
		if (line[0] == '\n' || line[0] == '\0')
			continue ;
		//printf("fm parse_scene, line 32 %s\n", line);
		parse(elements, line, element_exists);
	}
	free(line);
}

/* t_list *elements this the list which we use to create the Singly linked lists
 * of all our details like figures, light, camera, etc...*/

t_list	*parse_scene(char *file)
{
	t_list				*elements;
	int					fd;
	t_element_exists	element_exists;

	elements = NULL;
	element_exists.ambient_light = false;
	element_exists.camera = false;
	element_exists.light = false;
	//element_exists.multi_ambient_light = false; //need for bonus??
	//element_exists.multi_light = false; //need for bonus??
	fd = open(file, O_RDONLY);
	if (fd == -1)
		error_exit(FILE_READ_ERROR);
	read_parse_file(fd, &elements, &element_exists);
	return (elements);
}

