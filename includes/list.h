#ifndef LIST_H
# define LIST_H

# include "types.h"
# include "optional.h"

typedef struct s_entry
{
	struct s_entry	*next;
	void			*value;
}	t_entry;

typedef struct s_centry
{
	struct s_centry	*next;
}	t_centry;

typedef struct s_list
{
	t_consumer	del;
	t_entry		*first;
	int			size;
}	t_list;

typedef struct s_clist
{
	t_consumer	del;
	t_centry	*first;
	int			size;
}	t_clist;

t_entry		*lst_get_entry(t_list *list, int index);
t_entry		*lst_last_entry(t_list *list);
t_entry		*lst_new_entry(void *value);
t_list		*lst_splice(t_list *list, int start, int end, void *value);
t_list		*lst_slice(t_list *list, int start, int end);
t_list		*lst_map(t_list *list, t_function mapper, t_consumer del);
t_list		*lst_concat(t_list *t1, t_list *t2);
t_list		*lst_new(t_consumer del);
t_list		*lst_copy(t_list *list);
t_list		*lst_filter(t_list *list, t_predicate filter);
t_opt		lst_shift_entry(t_list *list);
t_opt		lst_set(t_list *list, int index, void *new_value);
void		*lst_remove(t_list *list, int index);
t_opt		lst_get(t_list *list, int index);
t_entry		*lst_shift(t_list *list);
t_list		*lst_map_in(t_list *list, t_function mapper, t_consumer del);
t_list		*lst_filter_in(t_list *list, t_predicate filter);
t_opt		lst_last(t_list *list);
void		*lst_first(t_list *list);
t_opt		lst_pop(t_list *list);
void		lst_delete(t_list *list, int index);
void		lst_foreach(t_list *list, t_consumer visitor);
void		lst_foreachp(t_list *list, t_biconsumer visitor, void *param);
void		lst_destroy(t_list *list);
void		lst_free(t_list *list);
void		*lst_reduce(t_list *l, void *id, t_bifunction a, t_consumer a_free);
void		lst_clear(t_list *list);
int			lst_insert(t_list *list, int index, void *value);
int			lst_add_all(t_list *container, t_list *list);
int			lst_unshift(t_list *list, void *element);
t_list		*as_listf(void **array, t_consumer del);
t_list		*as_list(void **array, t_consumer del);
void		*lst_push(t_list *list, void *element);
int			lst_not_empty(t_list *list);
int			lst_is_empty(t_list *list);
int			lst_size(t_list *list);

void		*clst_push(t_clist *list, void *entry);
t_centry	*clst_last_entry(t_clist *list);
int			clst_not_empty(t_clist *list);
int			clst_is_empty(t_clist *list);
void		clst_destroy(t_clist *list);
void		*clst_shift(t_clist *list);
void		clst_clear(t_clist *list);
t_clist		*clst_new(t_consumer del);

#endif
