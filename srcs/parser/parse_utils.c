/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*   Updated: 2022/09/27 12:06:02 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_arraylen(char **array)
{
	int	i;

	i = 1;
	while (array[i])
		i++;
	return (i);
}

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	array = NULL;
}

char	*check_float_str(char *str)
{
	size_t	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '-')
		error_exit(ELEMENT_PARAMS_ERROR);
	i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '\0')
		return (str);
	if (str[i] != '.')
		error_exit(ELEMENT_PARAMS_ERROR);
	i++;
	if (!ft_isdigit(str[i]))
		error_exit(ELEMENT_PARAMS_ERROR);
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	return (str);
}

char	*check_int_str(char *str)
{
	int	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '-')
		error_exit(ELEMENT_PARAMS_ERROR);
	i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] != '\0')
		error_exit(ELEMENT_PARAMS_ERROR);
	return (str);
}