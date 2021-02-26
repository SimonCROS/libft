#include "list.h"
#include <stdlib.h>

/**
 * @brief Copies all elements of the list in a new list if they pass the filter.
 * 
 * @param list the list
 * @param filter the filter
 * @return t_list* the new list
 */

t_list	*lst_filter(t_list *list, t_predicate filter)
{
	t_entry	*entry;
	t_list	*copy;

	copy = lst_new(list->del);
	if (!copy)
		return (NULL);
	if (lst_is_empty(list))
		return (copy);
	entry = list->first;
	if (filter(entry->value))
		lst_push(copy, entry->value);
	while (entry->next)
	{
		entry = entry->next;
		if (filter(entry->value))
			lst_push(copy, entry->value);
	}
	return (copy);
}

/**
 * @brief Loop inside all values of the list and remove them if the predicate
 * filter returns false.
 * 
 * @param list the list
 * @param filter the filter
 * @return t_list* the same list, for chaining
 */

t_list	*lst_filter_in(t_list *list, t_predicate filter)
{
	t_entry	*entry;
	t_list	tmp;

	if (lst_is_empty(list))
		return (list);
	tmp = *list;
	list->first = NULL;
	entry = tmp.first;
	if (filter(entry->value))
	{
		lst_push(list, entry->value);
		entry->value = NULL;
	}
	while (entry->next)
	{
		entry = entry->next;
		if (filter(entry->value))
		{
			lst_push(list, entry->value);
			entry->value = NULL;
		}
	}
	lst_clear(&tmp);
	return (list);
}
