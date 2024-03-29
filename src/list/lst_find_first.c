#include "libft.h"

void	*lst_find_first(t_list *list, t_predicate predicate)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry && !predicate(entry->value))
	{
		entry = entry->next;
	}
	if (!entry)
		return (NULL);
	return (entry->value);
}

void	*lst_find_firstp(t_list *list, t_bipredicate comparator, void *arg)
{
	t_entry	*entry;

	if (lst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry && !comparator(entry->value, arg))
	{
		entry = entry->next;
	}
	if (!entry)
		return (NULL);
	return (entry->value);
}

void	*clst_find_first(t_clist *list, t_bipredicate comparator, void *arg)
{
	t_centry	*entry;

	if (clst_is_empty(list))
		return (NULL);
	entry = list->first;
	while (entry && !comparator(entry, arg))
	{
		entry = entry->next;
	}
	if (!entry)
		return (NULL);
	return (entry);
}
