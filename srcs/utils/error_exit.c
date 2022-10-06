/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:36:24 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
/*   Updated: 2022/09/27 12:06:02 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/minirt.h"

//int	ft_strlen(const char *str)
//{
//	int	i;
//
//	i = 0;
//	while (*(str + i) != '\0')
//		i++;
//	return (i);
//}

void	error_exit(char *code)
{
	if (code)
	{
		write(STDERR_FILENO, code, ft_strlen(code));
		write(STDERR_FILENO, " \nError\n", 8);
	}
	exit(EXIT_FAILURE);
}

//t_list	*ft_lstnew(void *content)
//{
//	t_list	*list;
//
//	list = (t_list *)malloc(sizeof(t_list));
//	if (!list)
//		return ((t_list *) NULL);
//	list->content = content;
//	list->next = NULL;
//	return (list);
//}
//
//t_list	*ft_lstlast(t_list *lst)
//{
//	t_list	*last;
//
//	if (lst)
//	{
//		while (lst->next)
//			lst = lst->next;
//	}
//	last = lst;
//	return (last);
//}
//
//void	ft_lstadd_back(t_list **lst, t_list *new)
//{
//	t_list	*last;
//
//	if (*lst)
//	{
//		last = ft_lstlast(*lst);
//		last->next = new;
//	}
//	else
//		*lst = new;
//}

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