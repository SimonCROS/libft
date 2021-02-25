#include "libft.h"

int	lst_unshift(t_list *list, void *element)
{
	t_entry	*entry;

	entry = lst_new_entry(element);
	if (!entry)
		return (list->size);
	entry->next = list->first;
	list->first = entry;
	return (++(list->size));
}
