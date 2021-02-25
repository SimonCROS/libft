#include "list.h"
#include <stdlib.h>

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
	lst_push(copy, mapper(entry->value));
	while (entry->next)
	{
		entry = entry->next;
		lst_push(copy, mapper(entry->value));
	}
	return (copy);
}
