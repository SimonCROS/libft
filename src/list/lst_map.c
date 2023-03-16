#include "libft.h"

char	lst_map_to(t_list *list, t_list *dest, t_mapper_options options)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return (TRUE);
	entry = list->first;
	while (entry)
	{
		if (!lst_push(dest, ((t_fun)options.mapper)(entry->value)))
		{
			lst_clear(dest);
			return (FALSE);
		}
		entry = entry->next;
	}
	return (TRUE);
}

t_list	*lst_map(t_list *list, t_mapper_options options, t_consumer del)
{
	t_list	*copy;

	copy = lst_new(del);
	if (!copy)
		return (NULL);
	if (!lst_map_to(list, copy, options))
	{
		lst_destroy(copy);
		return (NULL);
	}
	return (copy);
}

t_list	*lst_map_in(t_list *list, t_mapper_options options, t_consumer del)
{
	t_entry	*entry;
	void	*tmp;

	if (!list)
		return (NULL);
	entry = list->first;
	while (entry)
	{
		tmp = entry->value;
		if (options.parameter)
			entry->value = ((t_bifun)options.mapper)(tmp, options.parameter);
		else
			entry->value = ((t_fun)options.mapper)(tmp);
		if (options.free_old)
			list->del(tmp);
		entry = entry->next;
	}
	list->del = del;
	return (list);
}
