/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:24 by wdwain            #+#    #+#             */
/*   Updated: 2022/09/23 18:46:11 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/minirt.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

void	error_exit(char *code)
{
	if (code)
	{
		write(STDERR_FILENO, code, ft_strlen(code));
		write(STDERR_FILENO, " \nError\n", 8);
	}
	exit(EXIT_FAILURE);
}

//void	error_exit(int code)
//{
//	if (code == -1)
//		write(STDERR_FILENO, "Error: Can't allocate memory for new elemmemt\n",
//			  46);
//	exit(code);
//}

//int main(void)
//{
////	error_exit(MALLOC_ERROR);
//	error_exit(FILE_EXT_ERROR);
//	return(0);
//}