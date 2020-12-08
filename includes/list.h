/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:35:16 by scros             #+#    #+#             */
/*   Updated: 2020/12/08 15:21:44 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef void		(*t_list_delete)(void *);
typedef void		(*t_list_visitor)(void *);

typedef struct		s_entry
{
	void			*value;
	struct s_entry	*next;
}					t_entry;

typedef struct		s_list
{
	t_list_delete	delete;
	struct s_entry	*first;
	int				size;
}					t_list;

t_entry				*ft_lst_get_entry(t_list *list, int index);
t_entry				*ft_lst_last_entry(t_list *list);
t_entry				*ft_lst_new_entry(void *value);
t_list				*ft_lst_splice(int start, int end, void *value);
t_list				*ft_lst_slice(t_list *list, int start, int end);
t_list				*ft_lst_concat(t_list *t1, t_list *t2);
t_list				*ft_lst_new(t_list_delete delete);
void				*ft_lst_get(t_list *list, int index);
void				*ft_lst_shift(t_list *list);
void				*ft_lst_last(t_list *list);
void				*ft_lst_pop(t_list *list);
void				ft_lst_destroy(t_list *list);
void				ft_lst_clear(t_list *list);
int					ft_lst_add_all(t_list *container, t_list *list);
int					ft_lst_push(t_list *list, void *element);
int					ft_lst_is_empty(t_list *list);

#endif
