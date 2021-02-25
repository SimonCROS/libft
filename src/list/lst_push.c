#include "libft.h"

int	lst_push(t_list *list, void *element)
{
	t_entry	*entry;

	if (!list)
		return (0);
	entry = lst_new_entry(element);
	if (!entry)
		return (list->size);
	if (lst_is_empty(list))
		list->first = entry;
	else
		lst_last_entry(list)->next = entry;
	return (++(list->size));
}
