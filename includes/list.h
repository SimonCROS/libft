/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:35:16 by scros             #+#    #+#             */
/*   Updated: 2021/01/12 17:20:43 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct		s_entry
{
	void			*value;
	struct s_entry	*next;
}					t_entry;

typedef struct		s_list
{
	t_consumer		del;
	struct s_entry	*first;
	int				size;
}					t_list;

t_entry				*ft_lst_get_entry(t_list *list, int index);
t_entry				*ft_lst_last_entry(t_list *list);
t_entry				*ft_lst_new_entry(void *value);
t_list				*ft_lst_splice(t_list *list, int start, int end,
	void *value);
t_list				*ft_lst_slice(t_list *list, int start, int end);
t_list				*ft_lst_map(t_list *list, t_function mapper);
t_list				*ft_lst_concat(t_list *t1, t_list *t2);
t_list				*ft_lst_new(t_consumer del);
t_list				*ft_lst_copy(t_list *list);
void				*ft_lst_shift_entry(t_list *list);
void				*ft_lst_set(t_list *list, int index, void *new_value);
void				*ft_lst_remove(t_list *list, int index);
void				*ft_lst_get(t_list *list, int index);
void				*ft_lst_shift(t_list *list);
void				*ft_lst_last(t_list *list);
void				*ft_lst_pop(t_list *list);
void				ft_lst_foreach(t_list *list, t_consumer visitor);
void				ft_lst_destroy(t_list *list);
void				*ft_lst_reduce(t_list *list, void *identity,
	t_bifunction accumulator, t_consumer accumulator_free);
void				ft_lst_clear(t_list *list);
int					ft_lst_insert(t_list *list, int index, void *value);
int					ft_lst_add_all(t_list *container, t_list *list);
int					ft_lst_unshift(t_list *list, void *element);
int					ft_lst_push(t_list *list, void *element);
int					ft_lst_is_empty(t_list *list);
int					ft_lst_size(t_list *list);

#endif
