/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdwain <wdwain@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 19:35:18 by wdwain            #+#    #+#             */
/*   Updated: 2022/10/04 13:05:54 by wjasmine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// srcs/utils/error_exit.c
//int				ft_strlen(const char *str);
void			error_exit(char *code);
// srcs/utils/lists_operator.c
t_list			*ft_lstnew(void *content);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
// srcs/parser/ft_split.c
char			**ft_split(char const *s, char c);
// srcs/parser/parse_utils.c
int				ft_isdigit(int c);
int				ft_arraylen(char **array);
void			ft_free_array(char **array);
char			*check_float_str(char *str);
char			*check_int_str(char *str);
// srcs/parser/parse_utils_2.c
float			ft_atof(char *str);
unsigned int	parse_colors(char *array);
int				ft_atoi(const char *str);
void	check_commas(char *array);
// srcs/parser/parse_utils_3.c
t_vector	*parse_coordinates(char *array);
t_vector	*parse_vector(char *array);

#endif //UTILS_H
