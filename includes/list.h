/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scros <scros@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:35:16 by scros             #+#    #+#             */
/*   Updated: 2021/02/26 15:11:49 by scros            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "types.h"
# include "optional.h"

typedef struct s_entry
{
	void			*value;
	struct s_entry	*next;
}	t_entry;

typedef struct s_list
{
	t_consumer		del;
	t_entry			*first;
	int				size;
}	t_list;

t_entry	*lst_get_entry(t_list *list, int index);
t_entry	*lst_last_entry(t_list *list);
t_entry	*lst_new_entry(void *value);
t_list	*lst_splice(t_list *list, int start, int end, void *value);
t_list	*lst_slice(t_list *list, int start, int end);
t_list	*lst_map(t_list *list, t_function mapper, t_consumer del);
t_list	*lst_concat(t_list *t1, t_list *t2);
t_list	*lst_new(t_consumer del);
t_list	*lst_copy(t_list *list);
t_list	*lst_filter(t_list *list, t_predicate filter);
t_opt	lst_shift_entry(t_list *list);
t_opt	lst_set(t_list *list, int index, void *new_value);
t_opt	lst_remove(t_list *list, int index);
t_opt	lst_get(t_list *list, int index);
t_opt	lst_shift(t_list *list);
t_list	*lst_map_in(t_list *list, t_function mapper, t_consumer del);
t_list	*lst_filter_in(t_list *list, t_predicate filter);
t_opt	lst_last(t_list *list);
t_opt	lst_first(t_list *list);
t_opt	lst_pop(t_list *list);
void	lst_delete(t_list *list, int index);
void	lst_foreach(t_list *list, t_consumer visitor);
void	lst_foreachp(t_list *list, t_biconsumer visitor, void *param);
void	lst_destroy(t_list *list);
void	lst_free(t_list *list);
void	*lst_reduce(t_list *list, void *identity, t_bifunction accumulator,
			t_consumer accumulator_free);
void	lst_clear(t_list *list);
int		lst_insert(t_list *list, int index, void *value);
int		lst_add_all(t_list *container, t_list *list);
int		lst_unshift(t_list *list, void *element);
t_list	*as_listf(void **array, t_consumer del);
t_list	*as_list(void **array, t_consumer del);
int		lst_push(t_list *list, void *element);
int		lst_not_empty(t_list *list);
int		lst_is_empty(t_list *list);
int		lst_size(t_list *list);

#endif
