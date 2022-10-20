/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minirt.h"

static int	check_input(char *str, int *sign)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	if (i > 16 || str[i] != '\0' || !str)
		return (0);
	return (1);
}

float	ft_atof(char *str)
{
	double	result;
	double	divider;
	int		sign;
	int		i;

	result = 0;
	divider = 1;
	sign = 1;
	i = 0;
	if (!check_input(str, &sign))
		error_exit(ELEMENT_PARAMS_ERROR);
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '.' && str[i] != ',' && str[i])
		result = result * 10 + str[i++] - '0';
	if (str[i] == '.' || str[i] == ',')
		i++;
	while (str[i])
	{
		result = (result * 10 + str[i++] - '0');
		divider /= 10;
	}
	return (result * sign * divider);
}

void	check_commas(char *array)
{
	int	i;

	i = 0;
	while (array[i] != '\0')
	{
		if ((array[i] == ',' && array[i + 1] == ',') || (array[0] == ',')
			|| (array[i + 1] == '\0' && array[i] == ','))
			error_exit(ELEMENT_PARAMS_ERROR);
		i++;
	}
}

int	ft_atoi(const char *str)
{
	int		sign;
	size_t	value;

	sign = 1;
	value = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '-')
	{
		sign = sign * (-1);
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		value = (value * 10) + (*str - '0');
		str++;
		if (value > 9223372036854775807 && sign == 1)
			return (-1);
		if (value > 9223372036854775807 && sign == -1)
			return (0);
	}
	return (value * sign);
}

unsigned int	parse_colors(char *array)
{
	char			**colors;
	unsigned int	red;
	unsigned int	green;
	unsigned int	blue;

	check_commas(array);
	colors = ft_split(array, ',');
	if (colors == NULL)
		error_exit(PARSE_ERROR);
	if (ft_arraylen(colors) != 3)
		error_exit(ELEMENT_PARAMS_ERROR);
	red = ft_atoi(check_int_str(colors[0]));
	green = ft_atoi(check_int_str(colors[1]));
	blue = ft_atoi(check_int_str(colors[2]));
	if (!(red >= 0 && red <= 255) || !(green >= 0 && green <= 255)
		|| !(blue >= 0 && blue <= 255))
		error_exit(ELEMENT_PARAMS_ERROR);
	ft_free_array(colors);
	return (rgb_to_hex(red, green, blue));
}
