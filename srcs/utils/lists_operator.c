/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjasmine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:47:12 by wjasmine          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:55 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/minirt.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return ((t_list *) NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst)
	{
		while (lst->next)
			lst = lst->next;
	}
	last = lst;
	return (last);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*old;

	if (!del)
		return ;
	while (*lst)
	{
		(*del)((*lst)->content);
		old = *lst;
		*lst = old->next;
		free(old);
	}
	*lst = NULL;
}
